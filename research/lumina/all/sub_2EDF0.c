__int64 __fastcall sub_2EDF0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  const char *v3; // rbp
  size_t v4; // rax
  size_t v5; // r13
  size_t v6; // r12
  void *v7; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r12
  __int64 v11; // rbp
  _QWORD v12[7]; // [rsp+0h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a2 + 8);
  v12[1] = __readfsqword(0x28u);
  if ( v2 )
  {
    v3 = *(const char **)a2;
    v12[0] = *(_QWORD *)a2;
    if ( (unsigned __int64)(v2 - 1) > 0x2F8 )
    {
      v9 = sub_18F030(v3);
      if ( v9 > 0x2F8 )
      {
        v10 = v9 - 760;
        v11 = 0;
        do
        {
          if ( (unsigned int)sub_18ECE0(v12) == -1 )
            ++v12[0];
          ++v11;
        }
        while ( v10 != v11 );
      }
      v3 = (const char *)v12[0];
    }
  }
  else
  {
    v3 = s1;
    v12[0] = s1;
  }
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( v3 )
  {
    v4 = strlen(v3);
    v5 = v4 + 1;
    v6 = v4;
    v7 = (void *)sub_1987B0(a1, 0, v4 + 1, 1);
    *(_QWORD *)a1 = v7;
    *(_QWORD *)(a1 + 8) = v5;
    memmove(v7, v3, v6);
    *(_BYTE *)(*(_QWORD *)a1 + v6) = 0;
  }
  return a1;
}
