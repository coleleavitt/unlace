__int64 __fastcall sub_43890(
        __int64 *a1,
        double a2,
        double a3,
        double a4,
        __int64 a5,
        __int64 (__fastcall ***a6)(_QWORD, __int64 **))
{
  __int64 v7; // rax
  size_t v8; // rbx
  __int64 v9; // r13
  unsigned __int64 v10; // r8
  unsigned int v11; // ebx
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned __int64 v15; // [rsp+0h] [rbp-90h]
  unsigned __int64 v16; // [rsp+0h] [rbp-90h]
  __int64 v17; // [rsp+8h] [rbp-88h] BYREF
  __int128 v18; // [rsp+10h] [rbp-80h]
  __int64 v19; // [rsp+28h] [rbp-68h] BYREF
  __int128 v20; // [rsp+30h] [rbp-60h]
  _BYTE src[5]; // [rsp+4Bh] [rbp-45h] BYREF
  unsigned __int64 v22[8]; // [rsp+50h] [rbp-40h] BYREF

  v22[0] = __readfsqword(0x28u);
  v17 = 0;
  v19 = 0;
  v18 = 0;
  v20 = 0;
  v7 = pack_dd(src, v22) - (_QWORD)src;
  v8 = v7;
  if ( !v7 )
    goto LABEL_7;
  v9 = v20;
  v10 = v20 + v7;
  if ( !__CFADD__((_QWORD)v20, v7) )
    goto LABEL_15;
  if ( (unsigned __int64)v20 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v10 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_15:
    v13 = v19;
    v14 = v20;
    if ( *((_QWORD *)&v20 + 1) < v10 )
    {
      v16 = v10;
      v19 = qvector_reserve(&v19, v19, v10, 1);
      v13 = v19;
      v10 = v16;
      v14 = v20;
    }
    v15 = v10;
    memset((void *)(v13 + v14), 0, v10 - v14);
    *(_QWORD *)&v20 = v15;
    goto LABEL_6;
  }
  if ( (_QWORD)v20 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v20 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
  memcpy((void *)(v9 + v19), src, v8);
LABEL_7:
  if ( (unsigned int)sub_2F320((__int64)a1, 0xBu, (__int64)&v19, &v17, 0.0, a3, a4) == 1 )
    v11 = sub_432E0(a1, v17, v18, 0, a6);
  else
    v11 = -2147467259;
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree(v19);
  }
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree(v17);
  }
  return v11;
}
