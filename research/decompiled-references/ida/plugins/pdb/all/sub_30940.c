__int64 __fastcall sub_30940(__int64 a1, unsigned int a2, __int64 *a3, double a4, double a5, double a6)
{
  unsigned __int64 v6; // r14
  __int64 v8; // rax
  size_t v9; // r13
  __int64 v12; // rax
  unsigned int v13; // eax
  unsigned __int64 v14; // r8
  __int64 v15; // rsi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // [rsp+0h] [rbp-78h]
  unsigned __int64 v18; // [rsp+8h] [rbp-70h]
  __int64 v19; // [rsp+10h] [rbp-68h] BYREF
  __int128 v20; // [rsp+18h] [rbp-60h]
  _BYTE src[5]; // [rsp+33h] [rbp-45h] BYREF
  unsigned __int64 v22[8]; // [rsp+38h] [rbp-40h] BYREF

  v22[0] = __readfsqword(0x28u);
  v8 = sub_308E0(a1, a2);
  if ( v8 )
  {
    *a3 = v8;
    LODWORD(v9) = 1;
  }
  else
  {
    v19 = 0;
    v20 = 0;
    v12 = pack_dd(src, v22) - (_QWORD)src;
    v9 = v12;
    if ( v12 )
    {
      v6 = v20;
      v14 = v20 + v12;
      if ( !__CFADD__((_QWORD)v20, v12) )
        goto LABEL_9;
      goto LABEL_15;
    }
    while ( 1 )
    {
      v13 = sub_2F320(a1, 5u, (__int64)&v19, nullptr, 0.0, a5, a6);
      v9 = v13;
      if ( v13 != 1 || (unsigned int)sub_30940(a1, a2, a3) == 1 )
        break;
      if ( under_debugger )
        BUG();
      interr(30209);
LABEL_15:
      if ( v6 <= 0x7FFFFFFFFFFFFFFELL )
      {
        v14 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_9:
        v15 = v19;
        v16 = v6;
        if ( *((_QWORD *)&v20 + 1) < v14 )
        {
          v18 = v14;
          v19 = qvector_reserve(&v19, v19, v14, 1);
          v15 = v19;
          v14 = v18;
          v16 = v20;
        }
        v17 = v14;
        memset((void *)(v15 + v16), 0, v14 - v16);
        *(_QWORD *)&v20 = v17;
      }
      else if ( v6 != 0x7FFFFFFFFFFFFFFFLL )
      {
        *(_QWORD *)&v20 = 0x7FFFFFFFFFFFFFFFLL;
      }
      memcpy((void *)(v6 + v19), src, v9);
    }
    if ( v19 )
    {
      *(_QWORD *)&v20 = 0;
      qfree(v19);
    }
  }
  return (unsigned int)v9;
}

