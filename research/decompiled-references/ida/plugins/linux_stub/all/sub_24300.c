unsigned __int64 __fastcall sub_24300(__int64 *a1, _QWORD *a2, int a3)
{
  _QWORD *v3; // r15
  const char *v4; // rsi
  size_t v5; // rax
  size_t v6; // rax
  const char *v7; // r13
  size_t v8; // rax
  unsigned __int64 v9; // r8
  size_t v10; // r9
  unsigned __int64 v11; // r11
  __int64 v12; // rsi
  unsigned __int64 v13; // rax
  __int64 v15; // rax
  _QWORD *v16; // [rsp+0h] [rbp-68h]
  unsigned __int64 v17; // [rsp+8h] [rbp-60h]
  unsigned __int64 v18; // [rsp+8h] [rbp-60h]
  unsigned __int64 v19; // [rsp+10h] [rbp-58h]
  unsigned __int64 v20; // [rsp+10h] [rbp-58h]
  size_t v21; // [rsp+18h] [rbp-50h]
  size_t v22; // [rsp+18h] [rbp-50h]
  _BYTE v23[5]; // [rsp+23h] [rbp-45h] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  if ( a3 > 0 )
  {
    v3 = a2;
    v16 = &a2[7 * a3];
    while ( 1 )
    {
      v5 = pack_dd() - (_QWORD)v23;
      if ( v5 )
        sub_23580(a1, v23, v5);
      v6 = pack_dd() - (_QWORD)v23;
      if ( v6 )
        sub_23580(a1, v23, v6);
      v7 = s;
      if ( v3[2] )
        v7 = (const char *)v3[1];
      if ( !v7 )
        break;
      v8 = strlen(v7);
      v9 = a1[1];
      v10 = v8 + 1;
      v11 = v8 + 1 + v9;
      if ( !__CFADD__(v8 + 1, v9) )
        goto LABEL_16;
      if ( v9 <= 0x7FFFFFFFFFFFFFFELL )
      {
        v11 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_16:
        v12 = *a1;
        v13 = v9;
        if ( a1[2] < v11 )
        {
          v22 = v10;
          v20 = v9;
          v18 = v11;
          v15 = qvector_reserve();
          v10 = v22;
          v9 = v20;
          *a1 = v15;
          v12 = v15;
          v11 = v18;
          v13 = a1[1];
        }
        v21 = v10;
        v19 = v9;
        v17 = v11;
        memset((void *)(v12 + v13), 0, v11 - v13);
        v9 = v19;
        v10 = v21;
        a1[1] = v17;
        goto LABEL_5;
      }
      if ( v9 != 0x7FFFFFFFFFFFFFFFLL )
        goto LABEL_21;
LABEL_5:
      memcpy((void *)(v9 + *a1), v7, v10);
      v4 = s;
      if ( v3[5] )
        v4 = (const char *)v3[4];
      v3 += 7;
      sub_23640(a1, v4);
      if ( v16 == v3 )
        return v24 - __readfsqword(0x28u);
    }
    v9 = a1[1];
    v10 = 1;
    v7 = "";
    v11 = v9 + 1;
    if ( v9 != -1 )
      goto LABEL_16;
    v9 = -1;
    v7 = "";
LABEL_21:
    a1[1] = 0x7FFFFFFFFFFFFFFFLL;
    goto LABEL_5;
  }
  return v24 - __readfsqword(0x28u);
}

