__int64 __fastcall sub_177750(__int64 a1, __int64 a2, unsigned __int8 *a3, __m128i a4, __m128 a5)
{
  bool v6; // zf
  unsigned int v7; // eax
  unsigned int v8; // ebx
  unsigned __int64 *v10; // rbp
  __int64 v11[2]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v12; // [rsp+10h] [rbp-98h]
  __int64 v13; // [rsp+18h] [rbp-90h]
  _QWORD v14[2]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v15; // [rsp+40h] [rbp-68h]
  __int64 v16; // [rsp+48h] [rbp-60h]
  __int64 v17; // [rsp+50h] [rbp-58h]
  char v18; // [rsp+58h] [rbp-50h]
  unsigned __int8 *v19; // [rsp+60h] [rbp-48h]
  __int64 *v20; // [rsp+68h] [rbp-40h]
  int v21; // [rsp+70h] [rbp-38h]
  char v22; // [rsp+74h] [rbp-34h]
  unsigned __int64 v23; // [rsp+78h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  sub_124680((__int64)v11, a1, (__int64)a3, 0, *(double *)a4.m128i_i64, a5);
  v14[1] = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v20 = v11;
  v6 = *(_DWORD *)a3 == 8;
  v19 = a3;
  v21 = 0;
  v22 = 0;
  v15 = a1;
  v14[0] = &off_4DDEA0;
  if ( !v6
    && (LOBYTE(v7) = sub_125B90(
                       a3,
                       *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL),
                       (unsigned int *)a2,
                       0,
                       *(double *)a4.m128i_i64),
        v8 = v7,
        (_BYTE)v7)
    && *((_DWORD *)v19 + 17) == *(_DWORD *)(a2 + 68) )
  {
    v10 = *(unsigned __int64 **)(*(_QWORD *)(v15 + 64) + 1504LL);
    sub_125180((unsigned __int8 *)(a2 + 32), v19 + 64);
    sub_172B80(v10, a2, a4);
  }
  else
  {
    v21 = 0;
    v8 = 0;
    if ( !(unsigned int)sub_11E900((_BYTE *)a2, (__int64)v14) )
      LOBYTE(v8) = v21 > 0;
  }
  if ( v12 )
  {
    v13 = 0;
    qfree(v12);
  }
  qfree(v11[0]);
  return v8;
}

