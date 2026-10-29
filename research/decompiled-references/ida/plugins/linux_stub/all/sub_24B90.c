unsigned __int64 __fastcall sub_24B90(__int64 *a1, _QWORD *a2, __int64 a3, _QWORD *a4)
{
  size_t v6; // r15
  size_t v7; // rax
  size_t v8; // rax
  size_t v9; // r15
  const void *v10; // rbp
  size_t v11; // rax
  const void *v13; // [rsp+8h] [rbp-60h]
  _BYTE v14[5]; // [rsp+1Eh] [rbp-4Ah] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  sub_24980(a1, a2, 1);
  v6 = *(_QWORD *)(a3 + 8);
  v13 = *(const void **)a3;
  if ( HIDWORD(v6) )
    goto LABEL_16;
  v7 = pack_dd() - (_QWORD)v14;
  if ( v7 )
    sub_23580(a1, v14, v7);
  if ( v6 )
    sub_23580(a1, v13, v6);
  v8 = pack_dq() - (_QWORD)v14;
  if ( v8 )
    sub_23580(a1, v14, v8);
  v9 = *(_QWORD *)(a3 + 40);
  v10 = *(const void **)(a3 + 32);
  if ( HIDWORD(v9) )
LABEL_16:
    sub_23560();
  v11 = pack_dd() - (_QWORD)v14;
  if ( v11 )
    sub_23580(a1, v14, v11);
  if ( v9 )
  {
    sub_23580(a1, v10, v9);
    if ( a4 )
      return sub_24980(a1, a4, 0);
  }
  else if ( a4 )
  {
    return sub_24980(a1, a4, 0);
  }
  return v15 - __readfsqword(0x28u);
}

