unsigned __int64 __fastcall sub_3C85D0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // r15
  size_t v5; // r12
  unsigned __int64 v6; // r8
  size_t v7; // rax
  size_t v8; // rax
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // [rsp+8h] [rbp-50h]
  unsigned __int64 v14; // [rsp+8h] [rbp-50h]
  _BYTE src[5]; // [rsp+13h] [rbp-45h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  v3 = pack_dd() - (_QWORD)src;
  if ( v3 )
  {
    v4 = a2[1];
    v5 = v3;
    v6 = v4 + v3;
    if ( __CFADD__(v4, v3) )
    {
      if ( v4 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v4 != 0x7FFFFFFFFFFFFFFFLL )
          a2[1] = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((void *)(v4 + *a2), src, v5);
        goto LABEL_7;
      }
      v6 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v10 = *a2;
    v11 = a2[1];
    if ( a2[2] < v6 )
    {
      v14 = v6;
      v12 = qvector_reserve();
      v6 = v14;
      *a2 = v12;
      v10 = v12;
      v11 = a2[1];
    }
    v13 = v6;
    memset((void *)(v10 + v11), 0, v6 - v11);
    a2[1] = v13;
    goto LABEL_6;
  }
LABEL_7:
  v7 = pack_dd() - (_QWORD)src;
  if ( v7 )
    sub_3C8510(a2, src, v7);
  v8 = pack_dd() - (_QWORD)src;
  if ( v8 )
    sub_3C8510(a2, src, v8);
  return v16 - __readfsqword(0x28u);
}

