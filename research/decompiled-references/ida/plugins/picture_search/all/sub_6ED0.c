__int64 __fastcall sub_6ED0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx

  if ( (unsigned __int8)callui(53, a2, &callui, a4) )
  {
    v4 = qalloc_or_throw();
    sub_6780(v4);
    return v4;
  }
  else
  {
    sub_5470((__int64)"requires IDA gui\n");
    return 0;
  }
}

