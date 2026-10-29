bool __fastcall sub_31DE0(__int64 a1, int a2)
{
  _DWORD *v2; // rdi
  __int64 (*v3)(void); // rax
  unsigned int v4; // eax
  int v5; // edx
  int v7; // edx

  v2 = *(_DWORD **)(a1 + 320);
  v3 = *(__int64 (**)(void))(*(_QWORD *)v2 + 112LL);
  if ( (char *)v3 == (char *)sub_23F30 )
    v4 = v2[4];
  else
    v4 = v3();
  v5 = 21;
  if ( v4 - 3 <= 4 )
    return a2 == v5;
  v5 = 335;
  if ( v4 == 208 )
    return a2 == v5;
  if ( v4 == 104 )
  {
    v5 = 23;
    return a2 == v5;
  }
  if ( v4 <= 0x68 )
  {
    v5 = 23;
    if ( v4 - 96 > 6 && v4 != 103 )
      v5 = 0;
    return a2 == v5;
  }
  v5 = 23;
  if ( v4 == 244 || v4 == 240 )
    return a2 == v5;
  v7 = 81;
  if ( v4 != 246 )
    v7 = 0;
  return a2 == v7;
}

