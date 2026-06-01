__int64 __fastcall sub_4FF50(__int64 a1, __int64 a2, char **a3)
{
  char *v4; // rdx
  size_t v7; // rax
  char *v8; // r12
  __int64 i; // r15
  __int64 v10; // rax
  size_t v11; // rax
  __int64 v12; // rax
  char v13; // r8
  __int64 v14; // rsi
  size_t v15; // rax
  size_t v16; // rax
  __int64 v17; // rdx
  size_t v18; // rax
  __int64 v19; // rax
  char v20; // [rsp+7h] [rbp-59h]
  _BYTE v21[5]; // [rsp+16h] [rbp-4Ah] BYREF
  _BYTE v22[5]; // [rsp+1Bh] [rbp-45h] BYREF
  unsigned __int64 v23[8]; // [rsp+20h] [rbp-40h] BYREF

  v23[0] = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v4 = a3[1];
  if ( v4 )
  {
    v7 = pack_dd(v21, v22, v4) - (_QWORD)v21;
    if ( v7 )
      sub_4E640((__int64 *)a1, v21, v7);
    v8 = *a3;
    for ( i = (__int64)&(*a3)[32 * (_QWORD)a3[1]]; (char *)i != v8; v8 += 32 )
    {
      v12 = *(_QWORD *)(a1 + 8);
      v13 = *v8;
      v14 = *(_QWORD *)a1;
      if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v12 + 1) )
      {
        v20 = *v8;
        v19 = qvector_reserve(a1, v14, v12 + 1, 1);
        *(_QWORD *)a1 = v19;
        v14 = v19;
        v13 = v20;
        v12 = *(_QWORD *)(a1 + 8);
      }
      *(_BYTE *)(v14 + v12) = v13;
      ++*(_QWORD *)(a1 + 8);
      v15 = pack_dd(v21, v22, (unsigned int)(*((_DWORD *)v8 + 1) + 1)) - (_QWORD)v21;
      if ( v15 )
        sub_4E640((__int64 *)a1, v21, v15);
      v16 = pack_dd(v21, v22, (unsigned int)(*((_DWORD *)v8 + 2) + 1)) - (_QWORD)v21;
      if ( v16 )
        sub_4E640((__int64 *)a1, v21, v16);
      v17 = *((_QWORD *)v8 + 2) - a2 + 1;
      if ( *((_QWORD *)v8 + 2) == -1 )
        v17 = 0;
      v18 = pack_dq(v21, v23, v17) - (_QWORD)v21;
      if ( v18 )
        sub_4E640((__int64 *)a1, v21, v18);
      if ( v8[28] )
        v10 = pack_dd(v21, v22, (unsigned int)(*((_DWORD *)v8 + 6) + 1));
      else
        v10 = pack_dd(v21, v22, 0);
      v11 = v10 - (_QWORD)v21;
      if ( v11 )
        sub_4E640((__int64 *)a1, v21, v11);
    }
  }
  return a1;
}

