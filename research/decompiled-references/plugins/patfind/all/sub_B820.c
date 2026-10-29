__int64 __fastcall sub_B820(__int64 a1, int a2)
{
  float (*v2)(void); // rdx
  __int64 (*v3)(void); // rax
  __int64 v4; // rbp
  int v5; // r13d
  __int64 v6; // r12
  char *v7; // rbx
  __int64 v8; // rax
  char v9; // r12
  const char *v10; // rdi
  float v11; // xmm2_4
  char *v13; // rbp
  int v14; // eax
  float v15; // xmm0_4
  int v16; // eax
  float v17; // [rsp+Ch] [rbp-3Ch]
  char *endptr[7]; // [rsp+10h] [rbp-38h] BYREF

  endptr[1] = (char *)__readfsqword(0x28u);
  v2 = *(float (**)(void))(*(_QWORD *)a1 + 96LL);
  if ( (char *)v2 != (char *)sub_B600 )
    return (unsigned int)(int)v2();
  v3 = *(__int64 (**)(void))(*(_QWORD *)a1 + 48LL);
  if ( (char *)v3 == (char *)sub_AF00 )
  {
    if ( a2 < 0 || a2 >= *(_DWORD *)(a1 + 124) )
      return 0;
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 112) + 32LL * a2 + 16);
  }
  else
  {
    v4 = v3();
  }
  if ( !v4 )
    return 0;
  if ( !*(_BYTE *)v4 )
  {
    v6 = 1;
    v7 = (char *)operator new[](1u);
LABEL_9:
    v8 = 0;
    do
    {
      v7[v8] = *(_BYTE *)(v4 + v8);
      ++v8;
    }
    while ( v8 != v6 );
    goto LABEL_11;
  }
  v5 = strlen((const char *)(v4 + 1)) + 2;
  v6 = v5;
  v7 = (char *)operator new[](v5);
  if ( v5 > 0 )
    goto LABEL_9;
LABEL_11:
  v9 = 0;
  v10 = v7;
  if ( *v7 == 45 )
  {
    v10 = v7 + 1;
    v9 = 1;
  }
  v11 = (float)(int)strtol(v10, endptr, 10);
  if ( *endptr[0] == 46 )
  {
    v13 = endptr[0] + 1;
    v17 = v11;
    v14 = strtol(endptr[0] + 1, endptr, 10);
    v15 = (float)v14 * flt_10340[endptr[0] - v13];
    v11 = v11 + v15;
    if ( *endptr[0] == 101 )
    {
      v16 = strtol(endptr[0] + 1, endptr, 10);
      v11 = (float)(v17 + v15) * powf(10.0, (float)v16);
    }
  }
  if ( v9 )
    v11 = -v11;
  if ( v7 )
    operator delete[](v7);
  return (unsigned int)(int)v11;
}
