__int64 __fastcall sub_203F0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  const char *v4; // r8
  const char *v6; // rax
  const void *v7; // rax
  _QWORD v8[4]; // [rsp+0h] [rbp-10E8h] BYREF
  _QWORD v9[4]; // [rsp+20h] [rbp-10C8h] BYREF
  __m128i si128; // [rsp+40h] [rbp-10A8h] BYREF
  const char *v11; // [rsp+50h] [rbp-1098h]
  __int128 v12; // [rsp+58h] [rbp-1090h]
  __int64 v13; // [rsp+68h] [rbp-1080h] BYREF
  __int128 v14; // [rsp+70h] [rbp-1078h]
  __int64 v15; // [rsp+80h] [rbp-1068h]
  __int64 v16; // [rsp+88h] [rbp-1060h]
  __int128 v17; // [rsp+90h] [rbp-1058h]
  int v18; // [rsp+A0h] [rbp-1048h]
  unsigned __int64 v19; // [rsp+10B8h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  v12 = 0;
  v14 = 0;
  v17 = 0;
  v11 = nullptr;
  v13 = 0;
  v16 = 0;
  v15 = 0;
  v18 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_82340);
  v2 = sub_4E5A0(a1, &si128);
  if ( !(_BYTE)v2 )
    goto LABEL_7;
  if ( (_DWORD)v15 != 11 )
  {
    if ( (_DWORD)v15 == 25 )
    {
      v3 = a1 + 1704;
      v4 = src;
      if ( (_QWORD)v12 )
        v4 = v11;
      v2 = sub_3B560(v3, a2, HIDWORD(v15), &v13, v4, 1);
      goto LABEL_7;
    }
LABEL_15:
    v2 = 0;
    goto LABEL_7;
  }
  if ( v18 != 25 || (unsigned __int64)v17 <= 1 || *(_QWORD *)(a1 + 2112) <= 1u )
    goto LABEL_15;
  sub_2F0B0(v8, *(_QWORD *)(a1 + 2104));
  v6 = (const char *)qbasename();
  sub_20360((__int64)v9, v6);
  v7 = (const void *)qmakepath();
  sub_19AC0(a2, v7);
  if ( v9[0] )
  {
    v9[1] = 0;
    qfree();
  }
  if ( v8[0] )
  {
    v8[1] = 0;
    qfree();
  }
LABEL_7:
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree();
  }
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree();
  }
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree();
  }
  return v2;
}

