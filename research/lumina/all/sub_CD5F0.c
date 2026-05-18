unsigned __int64 __fastcall sub_CD5F0(_BYTE *a1, __int64 *a2, unsigned int a3, char *a4, __int64 a5)
{
  __int64 v7; // r12
  unsigned __int8 v8; // r8
  unsigned int v9; // ebp
  unsigned int v10; // ebx
  __int16 v11; // r15
  __int64 v12; // rdx
  char *v13; // rdi
  __int64 v14; // rsi
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int8 v20; // al
  unsigned int v24; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v25; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v26; // [rsp+28h] [rbp-40h]

  *(_BYTE *)(a5 + 30) = 0;
  v7 = *(_QWORD *)(a5 + 8);
  v8 = *a4;
  v26 = __readfsqword(0x28u);
  if ( (v8 & 0x80u) != 0 )
  {
    v20 = sub_CB760(a4, (int *)&v24);
    v9 = v24;
    v10 = v20;
  }
  else
  {
    v9 = v8;
    v10 = 1;
    v24 = v8;
  }
  v11 = 0;
  if ( v10 < v9 && v9 <= a3 )
  {
    while ( 1 )
    {
      v13 = &a4[v10];
      v14 = (unsigned __int8)*v13;
      if ( (v14 & 0x80u) != 0LL )
      {
        LOBYTE(v15) = sub_CB760(v13, (int *)&v25);
        v14 = v25;
        v15 = (unsigned __int8)v15;
      }
      else
      {
        v25 = (unsigned __int8)*v13;
        v15 = 1;
      }
      v10 += v15;
      *(_BYTE *)(v7 + 22) = *a1;
      v16 = *a2;
      *(_DWORD *)(v7 + 32) = 0;
      *(_QWORD *)(v7 + 8) = 0;
      *(_QWORD *)(v7 + 24) = v16;
      sub_C6E20(&a4[v9], v14, v7);
      v12 = v25 > 0x7F ? (v25 - 12) >> 1 : byte_1BEB80[v25];
      v9 += v12;
      if ( (unsigned __int16)++v11 >= *(_WORD *)(a5 + 28) || v10 >= v24 || v9 > a3 )
        break;
      v7 += 56;
    }
    if ( v9 > a3 && v11 )
    {
      if ( (*(_WORD *)(v7 + 20) & 0x9000) != 0 )
        sub_C93F0(v7, v14, v12, a5, v17, v18);
      else
        *(_WORD *)(v7 + 20) = 1;
    }
  }
  *(_WORD *)(a5 + 28) = v11;
  return __readfsqword(0x28u) ^ v26;
}
