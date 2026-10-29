__int64 __fastcall sub_22230(__int64 a1)
{
  __int64 v1; // rax
  size_t v2; // rbp
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // r15
  unsigned int v5; // ebx
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-60h]
  unsigned __int64 v11; // [rsp+10h] [rbp-58h]
  _BYTE src[5]; // [rsp+23h] [rbp-45h] BYREF
  unsigned __int64 v13; // [rsp+28h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  sub_31A90(&v9, 42);
  v1 = pack_dd() - (_QWORD)src;
  v2 = v1;
  if ( v1 )
  {
    v3 = v10;
    v4 = v10 + v1;
    if ( __CFADD__(v10, v1) )
    {
      if ( v10 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v10 != 0x7FFFFFFFFFFFFFFFLL )
          v10 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((void *)(v3 + v9), src, v2);
        goto LABEL_7;
      }
      v4 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v7 = v9;
    v8 = v10;
    if ( v11 < v4 )
    {
      v9 = qvector_reserve();
      v7 = v9;
      v8 = v10;
    }
    memset((void *)(v7 + v8), 0, v4 - v8);
    v10 = v4;
    goto LABEL_6;
  }
LABEL_7:
  v5 = sub_2E680(a1 + 864, &v9, 4294967294LL, 0);
  if ( v9 )
  {
    v10 = 0;
    qfree();
  }
  return v5;
}

