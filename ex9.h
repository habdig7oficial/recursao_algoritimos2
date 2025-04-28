int v_max = 0;
int max(int vec[], int len){
  if(len == 0)
      return v_max;
  else {
    if(vec[len - 1] > v_max)
        v_max = vec[len - 1];
    max(vec, len - 1);
  }
    
}