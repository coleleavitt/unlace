bool __fastcall sub_31E80(__int64 a1, int a2)
{
  _DWORD *v2; // rdi
  __int64 (*v3)(void); // rax
  unsigned int v4; // eax
  int v5; // edx

  if ( a2 == 30006 )
    return 1;
  v2 = *(_DWORD **)(a1 + 320);
  v3 = *(__int64 (**)(void))(*(_QWORD *)v2 + 112LL);
  if ( (char *)v3 == (char *)sub_23F30 )
    v4 = v2[4];
  else
    v4 = v3();
  v5 = 22;
  if ( v4 - 3 > 4 )
  {
    v5 = 334;
    if ( v4 != 208 )
    {
      if ( v4 == 104 )
      {
        v5 = 21;
      }
      else if ( v4 <= 0x68 )
      {
        v5 = 21;
        if ( v4 - 96 > 6 && v4 != 103 )
          v5 = 0;
      }
      else
      {
        v5 = 21;
        if ( v4 != 244 && v4 != 240 )
        {
          v5 = 79;
          if ( v4 != 246 )
            v5 = 0;
        }
      }
    }
  }
  return a2 == v5;
}
