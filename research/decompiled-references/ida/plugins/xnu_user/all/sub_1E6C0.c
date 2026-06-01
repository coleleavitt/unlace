__int64 __fastcall sub_1E6C0(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  const char *v3; // r8
  __int64 v4; // r14
  bool v6; // zf
  const char *v8; // rsi
  unsigned int v9; // eax
  unsigned int v10; // ebp
  const char *v12; // [rsp+0h] [rbp-C8h] BYREF
  __int128 v13; // [rsp+8h] [rbp-C0h]
  __m128i si128; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+30h] [rbp-98h]
  __int128 v16; // [rsp+38h] [rbp-90h]
  __int64 v17; // [rsp+48h] [rbp-80h] BYREF
  __int128 v18; // [rsp+50h] [rbp-78h]
  __int64 v19; // [rsp+60h] [rbp-68h]
  __int64 v20; // [rsp+68h] [rbp-60h]
  __int128 v21; // [rsp+70h] [rbp-58h]
  int v22; // [rsp+80h] [rbp-48h]
  unsigned __int64 v23; // [rsp+88h] [rbp-40h]

  v3 = src;
  v4 = a1 + 1704;
  v6 = a3[3] == 0;
  v23 = __readfsqword(0x28u);
  v12 = nullptr;
  v13 = 0;
  if ( !v6 )
    v3 = (const char *)a3[2];
  if ( !(unsigned __int8)sub_3B560(a1 + 1704, &v12, *((unsigned int *)a3 + 17), a3 + 5, v3, 0) )
  {
    v15 = 0;
    v16 = 0;
    v18 = 0;
    v21 = 0;
    v17 = 0;
    v20 = 0;
    v19 = 0;
    v22 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_82340);
LABEL_13:
    if ( (unsigned __int8)sub_1E4D0(a1, (__int64)&si128, *a3) && (unsigned __int8)sub_2FED0(v4, a2, &v17, a3 + 5, *a3)
      || *((_DWORD *)a3 + 17) == 11 && (unsigned __int8)sub_2FED0(v4, a2, a1 + 1536, a3 + 5, *a3) )
    {
      v10 = 1;
    }
    else
    {
      v10 = sub_42860(v4, *a3, a2, 0);
    }
    if ( v20 )
    {
      *(_QWORD *)&v21 = 0;
      qfree();
    }
    if ( v17 )
    {
      *(_QWORD *)&v18 = 0;
      qfree();
    }
    goto LABEL_7;
  }
  v8 = src;
  if ( (_QWORD)v13 )
    v8 = v12;
  v9 = sub_33A30(v4, v8, *a3, a2, a3 + 5);
  v15 = 0;
  v10 = v9;
  v16 = 0;
  v18 = 0;
  v21 = 0;
  v17 = 0;
  v20 = 0;
  v19 = 0;
  v22 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_82340);
  if ( !(_BYTE)v9 )
    goto LABEL_13;
LABEL_7:
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree();
  }
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree();
  }
  return v10;
}

