__int64 __fastcall sub_25070(__int64 a1, _DWORD **a2, __int64 a3, __int64 a4, _DWORD *a5, __int64 a6, unsigned int *a7)
{
  __int64 v7; // rbx
  __int64 v8; // r14
  int v9; // eax
  unsigned int v10; // r12d
  __int64 v11; // rbx
  unsigned int v12; // r15d
  int v13; // r13d
  unsigned int v15; // r10d
  unsigned int v16; // r13d
  char v17; // [rsp+0h] [rbp-78h]
  unsigned int v19; // [rsp+24h] [rbp-54h]
  int v20; // [rsp+2Ch] [rbp-4Ch]
  int v21; // [rsp+34h] [rbp-44h] BYREF
  unsigned __int64 v22; // [rsp+38h] [rbp-40h]

  v19 = a6;
  v22 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a1 + 8);
  if ( !*(_BYTE *)(v7 + 552) )
  {
    if ( !a7 )
      return 1;
    goto LABEL_8;
  }
  if ( (_DWORD)a4 )
    sub_DB80((__int64)"Cannot handle non-zero tkType.", (__int64)a2, a3, a4, (__int64)a5, a6, v17);
  v8 = a1;
  v9 = sub_24E30(*(_QWORD *)(a1 + 8), (unsigned int)a3, a3, a4, (__int64)a5, a6);
  v10 = *(_DWORD *)(v7 + 556);
  v20 = v9;
  if ( !v10 )
    goto LABEL_8;
  v11 = v7 + 552;
  v12 = 0;
  v13 = v9;
  while ( !(unsigned __int8)sub_239A0(*(_QWORD *)(a1 + 8), &v21, v11, v12, 0) || v21 != v13 )
  {
    if ( ++v12 == v10 )
      goto LABEL_8;
  }
  v15 = 0;
  if ( v10 == v12 )
  {
LABEL_8:
    *a7 = 0;
    return 1;
  }
  v16 = v12;
  if ( v12 < v10 )
  {
    do
    {
      if ( (unsigned __int8)sub_239A0(*(_QWORD *)(a1 + 8), &v21, v11, v16, 0) && v21 != v20 )
        break;
      ++v16;
    }
    while ( v16 != v10 );
    v8 = a1;
    v15 = v16 - v12;
  }
  return sub_22950(*(_QWORD *)(v8 + 8), (v12 + 1) | 0xC000000, v15, a2, a5, v19, a7);
}

