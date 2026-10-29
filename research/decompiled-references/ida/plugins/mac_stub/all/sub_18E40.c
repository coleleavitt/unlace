__int64 __fastcall sub_18E40(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        const char *a6,
        char a7)
{
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rdx
  const char *v12; // rbp
  const char *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rbx
  __int64 v19; // r13
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // [rsp+0h] [rbp-48h]
  unsigned __int64 v24; // [rsp+8h] [rbp-40h] BYREF
  __int64 v25; // [rsp+10h] [rbp-38h]
  __int64 v26; // [rsp+18h] [rbp-30h]

  v23 = a2;
  v24 = a4;
  if ( !a4 )
  {
    LODWORD(a6) = 1;
    return (unsigned int)a6;
  }
  if ( a3 != -1 )
    qlseek();
  sub_18D60(a2, &v24, 1u, a6, a3, a5);
  v10 = v24;
  v11 = a1[1];
  if ( v11 < v24 )
  {
    v21 = *a1;
    if ( a1[2] < v24 )
    {
      v22 = qvector_reserve();
      v11 = a1[1];
      *a1 = v22;
      v21 = v22;
    }
    memset((void *)(v21 + v11), 0, v10 - v11);
    a1[1] = v10;
    v12 = (const char *)*a1;
    if ( a7 )
    {
      v13 = a6;
      sub_D980((__int64)"Loading %s", a6);
LABEL_9:
      v18 = 0;
      while ( 1 )
      {
        LODWORD(a6) = callui(27, v13, v14, v15, v16, v17, v23, v24, v25, v26);
        if ( (_BYTE)a6 )
          goto LABEL_15;
        v13 = v12;
        v19 = v10 - v18;
        if ( v10 - v18 > 0x8000 )
          v19 = 0x8000;
        if ( qlread() != v19 )
          goto LABEL_16;
        v18 += v19;
        v12 += v19;
        if ( v18 >= v10 )
          goto LABEL_15;
      }
    }
LABEL_21:
    LOBYTE(a6) = qlread() == v10;
    return (unsigned int)a6;
  }
  if ( v24 != v11 )
    a1[1] = v24;
  v12 = (const char *)*a1;
  if ( !a7 )
    goto LABEL_21;
  v13 = a6;
  sub_D980((__int64)"Loading %s", a6);
  if ( v10 )
    goto LABEL_9;
LABEL_15:
  LODWORD(a6) = 1;
LABEL_16:
  callui(24, 10, 0, &callui, v16, v17, v23, v24, v25, v26);
  return (unsigned int)a6;
}

