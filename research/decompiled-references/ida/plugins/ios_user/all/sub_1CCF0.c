__int64 __fastcall sub_1CCF0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v7; // [rsp+0h] [rbp-110h] BYREF
  __m128i si128; // [rsp+8h] [rbp-108h] BYREF
  __int64 v9; // [rsp+18h] [rbp-F8h]
  __int128 v10; // [rsp+20h] [rbp-F0h]
  __int64 v11; // [rsp+30h] [rbp-E0h]
  __int128 v12; // [rsp+38h] [rbp-D8h]
  __int64 v13; // [rsp+48h] [rbp-C8h]
  __int64 v14; // [rsp+50h] [rbp-C0h]
  __int128 v15; // [rsp+58h] [rbp-B8h]
  int v16; // [rsp+68h] [rbp-A8h]
  _QWORD v17[6]; // [rsp+78h] [rbp-98h] BYREF
  __int64 v18; // [rsp+A8h] [rbp-68h]
  __int128 v19; // [rsp+B0h] [rbp-60h]
  __int128 v20; // [rsp+C0h] [rbp-50h]
  __int64 *v21; // [rsp+D0h] [rbp-40h]
  __int64 v22; // [rsp+D8h] [rbp-38h]
  unsigned __int64 v23; // [rsp+E0h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  v10 = 0;
  v12 = 0;
  v15 = 0;
  v9 = 0;
  v11 = 0;
  v14 = 0;
  v13 = 0;
  v16 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_773F0);
  if ( (unsigned __int8)sub_438C0(a1, &si128, a2) )
  {
    v21 = &v7;
    v4 = *a1;
    v22 = a3;
    v19 = 0;
    v7 = -1;
    v17[1] = 8;
    memset(&v17[2], 0, 32);
    v18 = 0;
    v17[0] = off_8B958;
    v20 = 0;
    (*(void (__fastcall **)(__int64 *, _QWORD *, __m128i *))(v4 + 840))(a1, v17, &si128);
    v5 = v7;
    v17[0] = off_8B7D0;
    if ( v18 )
    {
      *(_QWORD *)&v19 = 0;
      qfree();
    }
  }
  else
  {
    v5 = 0;
  }
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree();
  }
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree();
  }
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree();
  }
  return v5;
}

