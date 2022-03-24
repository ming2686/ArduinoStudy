#include <limits.h>


void InsertSort(int DataSet[], int length){
  int value=0;
  for (int i = 1; i < length; i++)
  {
    if(DataSet[i-1]<=DataSet[i])
      continue;
    
    value=DataSet[i];
    for (int j = 0; j < i; j++)
    {
      if(DataSet[j] > value){
        memmove(&DataSet[j+1], &DataSet[j], sizeof(DataSet[0]*(i-j)));
        DataSet[j]=value;
        break;
      }
    }
  }
}

void InsertSortFor(int DataSet[], int length){
  int i, j, key;

  // 인텍스 0은 이미 정렬된 것으로 볼 수 있다.
  for(i=1; i<length; i++){
    key = DataSet[i]; // 현재 삽입될 숫자인 i번째 정수를 key 변수로 복사

    // 현재 정렬된 배열은 i-1까지이므로 i-1번째부터 역순으로 조사한다.
    // j 값은 음수가 아니어야 되고
    // key 값보다 정렬된 배열에 있는 값이 크면 j번째를 j+1번째로 이동
    for(j=i-1; j>=0 && DataSet[j]>key; j--){
      DataSet[j+1] = DataSet[j]; // 레코드의 오른쪽으로 이동
    }

    DataSet[j+1] = key;
  }
}

void Swap(int*A, int* B){
  int temp=*A;
  *A=*B;
  *B=temp;
}

int Partition(int DataSet[], int left, int right){
  int first =left;
  int pivot=DataSet[first];
  ++left;
  while(left<=right){
    while(DataSet[left]<=pivot && left<right)
      ++left;
    while(DataSet[right] >pivot && left <=right)
      --right;
    if(left <right)
      Swap(&DataSet[left], &DataSet[right]);
    else
      break;
  }
  Swap(&DataSet[first], &DataSet[right]);
  return right;
}

void QuickSort(int DataSet[], int left, int right){
  if(left<right){
    int index = Partition(DataSet, left, right);

    QuickSort(DataSet, left, index-1);
    QuickSort(DataSet, index+1, right);
  }
}


void BubbleSort(uint16_t DataSet[], uint16_t length){
    for (int i = 0; i < length-1; i++)
    {
        for (int j = 0; j < length-(i+1); j++)
        {
            if (DataSet[j] > DataSet[j+1])
            {
                int temp=DataSet[j+1];
                DataSet[j+1]=DataSet[j];
                DataSet[j]=temp;
            }
            
        }
        
    }
    
}
void MakeDataSet(uint16_t DataSet[], uint16_t length){
    for (int i = 0; i < length-1; i++)
    {
        DataSet[i]=length-i-1;
    }
    
}
void MakeRandomSet(uint16_t DataSet[], uint16_t length){
    for (int i = 0; i < length-1; i++)
    {
        DataSet[i]=random(UINT16_MAX);  //UINT16_MAX
    }
    
}



void PrintArray(uint16_t DataSet[], uint16_t length){
  
  for (size_t i = 0; i < 10; i++)
  {
    Serial.print(DataSet[i]);
    Serial.print(" ");
  }
  for (size_t i = 0; i < 10; i++)
  {
    Serial.print(DataSet[length-11+i]);
    Serial.print(" ");
  }
  Serial.println("...");
}
void setup()
{

    Serial.begin(9600);
    randomSeed(analogRead(0));

}
void loop()
{
    uint16_t _DataSet[800]={6,4,2,3,1,5};
    uint16_t length=sizeof(_DataSet)/sizeof(_DataSet[0]);
    uint16_t i=0;
    
    Serial.print( "Before : ");
    MakeRandomSet(_DataSet,length);
    PrintArray(_DataSet,length);
    for (size_t i = 0; i < 100; i++)
    {
        //MakeDataSet(_DataSet,length);
        //InsertSort(_DataSet,length);
        //QuickSort(_DataSet,0, length-1);
        MakeRandomSet(_DataSet,length);
        BubbleSort(_DataSet,length);
    }
    Serial.print( "After : ");
    PrintArray(_DataSet,length);

}