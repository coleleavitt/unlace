__int64 __fastcall sub_2FF40(__int64 a1, __int64 *a2, double a3, double a4, double a5)
{
  __int64 v6; // rax
  size_t v7; // rbx
  __int64 v8; // r12
  unsigned __int64 v9; // r8
  int v10; // eax
  char *v11; // r12
  char *v12; // rbp
  char *v13; // rbx
  bool v14; // zf
  unsigned int v15; // ebx
  size_t v17; // rax
  size_t v18; // r14
  void *v19; // rdi
  size_t v20; // r15
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // [rsp+0h] [rbp-90h]
  unsigned __int64 v25; // [rsp+0h] [rbp-90h]
  __int64 v26; // [rsp+8h] [rbp-88h] BYREF
  __int128 v27; // [rsp+10h] [rbp-80h]
  char *s; // [rsp+28h] [rbp-68h] BYREF
  __int128 v29; // [rsp+30h] [rbp-60h]
  _BYTE src[5]; // [rsp+4Bh] [rbp-45h] BYREF
  unsigned __int64 v31[8]; // [rsp+50h] [rbp-40h] BYREF

  v31[0] = __readfsqword(0x28u);
  v26 = 0;
  v27 = 0;
  s = nullptr;
  v29 = 0;
  v6 = pack_dd(src, v31) - (_QWORD)src;
  v7 = v6;
  if ( v6 )
  {
    v8 = v27;
    v9 = v27 + v6;
    if ( __CFADD__((_QWORD)v27, v6) )
    {
      if ( (unsigned __int64)v27 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v27 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v27 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((void *)(v8 + v26), src, v7);
        goto LABEL_7;
      }
      v9 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v21 = v26;
    v22 = v27;
    if ( *((_QWORD *)&v27 + 1) < v9 )
    {
      v25 = v9;
      v26 = qvector_reserve(&v26, v26, v9, 1);
      v21 = v26;
      v9 = v25;
      v22 = v27;
    }
    v24 = v9;
    memset((void *)(v21 + v22), 0, v9 - v22);
    *(_QWORD *)&v27 = v24;
    goto LABEL_6;
  }
LABEL_7:
  v10 = sub_2F320(a1, 0xCu, (__int64)&v26, (__int64 *)&s, 0.0, a4, a5);
  v11 = s;
  if ( v10 == 1 )
  {
    v12 = &s[v29];
    if ( s < &s[(unsigned __int64)v29] )
    {
      v13 = s;
      while ( *v13++ )
      {
        if ( v12 == v13 )
        {
          v13 = s;
          goto LABEL_13;
        }
      }
      if ( s )
      {
        v17 = strlen(s);
        v18 = v17;
        if ( !v17 )
        {
          v14 = v12 == v13;
          v15 = -2147467259;
          a2[1] = 0;
          if ( v14 )
            v15 = 0;
LABEL_24:
          *(_QWORD *)&v29 = 0;
          qfree(v11);
          goto LABEL_17;
        }
        v19 = (void *)*a2;
        v20 = v17 + 1;
        if ( a2[2] < v17 + 1 )
        {
          v23 = qvector_reserve(a2, *a2, v17 + 1, 1);
          *a2 = v23;
          v19 = (void *)v23;
        }
        a2[1] = v20;
        memmove(v19, v11, v18);
        *(_BYTE *)(*a2 + v18) = 0;
        v11 = s;
      }
      else
      {
LABEL_13:
        a2[1] = 0;
      }
      v14 = v12 == v13;
      v15 = -2147467259;
      if ( v14 )
        v15 = 0;
      goto LABEL_16;
    }
  }
  v15 = -2147467259;
LABEL_16:
  if ( v11 )
    goto LABEL_24;
LABEL_17:
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree(v26);
  }
  return v15;
}
