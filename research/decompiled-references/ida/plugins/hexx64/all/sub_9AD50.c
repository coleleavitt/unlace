__int64 __fastcall sub_9AD50(__int128 a1, __int64 a2, __int64 a3, unsigned __int8 *a4, unsigned __int8 *a5)
{
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r15
  unsigned __int8 *v17; // r13
  int v18; // eax
  char v19; // al
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // [rsp+0h] [rbp-D0h]
  int v23; // [rsp+18h] [rbp-B8h]
  __int64 v24; // [rsp+20h] [rbp-B0h]
  __int64 v25; // [rsp+28h] [rbp-A8h]
  unsigned __int8 v26; // [rsp+28h] [rbp-A8h]
  unsigned __int8 v27[16]; // [rsp+30h] [rbp-A0h] BYREF
  int v28; // [rsp+40h] [rbp-90h] BYREF
  __int128 v29; // [rsp+48h] [rbp-88h]
  __int64 v30; // [rsp+58h] [rbp-78h]
  _QWORD v31[2]; // [rsp+60h] [rbp-70h] BYREF
  unsigned __int64 v32; // [rsp+70h] [rbp-60h] BYREF
  __int64 v33; // [rsp+78h] [rbp-58h]
  _QWORD v34[10]; // [rsp+80h] [rbp-50h] BYREF

  v25 = *((_QWORD *)&a1 + 1);
  v34[3] = __readfsqword(0x28u);
  v9 = sub_958B0(*((__int64 *)&a1 + 1));
  result = 0;
  if ( !v9 )
  {
    v11 = *(_QWORD *)(a1 + 480);
    v31[1] = 0;
    v33 = 0;
    v12 = *(_QWORD *)(v11 + 112);
    v34[1] = 0;
    v29 = 0;
    v24 = v12;
    v31[0] = 0xFFFFFFFF00000000LL;
    v32 = 0xFFFFFFFF00000000LL;
    v34[0] = 0xFFFFFFFF00000000LL;
    sub_1253A0((__int64)&v28, a2);
    sub_125180((__int64)&v32, a5);
    if ( ((*(_DWORD *)a2 - 14) & 0xFFFFFFF7) != 0 )
    {
      if ( *(_QWORD *)(*((_QWORD *)&a1 + 1) + 64LL) )
      {
        if ( !under_debugger )
          sub_383060(0xCAD7u, 0.0);
        goto LABEL_27;
      }
      sub_125180((__int64)v34, (unsigned __int8 *)(a3 + 64));
      *((_QWORD *)&a1 + 1) = *(_QWORD *)(a2 + 8);
      if ( !(unsigned __int8)sub_132E20(a1, (__int64)v34, *((__int64 *)&a1 + 1), a2 + 64, 1u) )
        goto LABEL_20;
    }
    else
    {
      sub_125180((__int64)v34, (unsigned __int8 *)(a2 + 64));
      v20 = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 64LL);
      if ( !v20 )
        v20 = a3;
      *((_QWORD *)&a1 + 1) = *(_QWORD *)(a2 + 8);
      if ( !(unsigned __int8)sub_132E20(a1, (__int64)v34, *(_QWORD *)(v20 + 8), v20 + 64, 1u) )
        goto LABEL_20;
      if ( *(_DWORD *)a2 == 14 )
      {
        v22 = v30;
        v23 = HIDWORD(v34[0]);
        v21 = sub_32ABC0(*(_QWORD *)(v33 + 16), SHIDWORD(v32), 1);
        sub_120A10((__int64)&v32, v24, v21, v23, v22, 0);
      }
    }
    sub_125180((__int64)v31, a4);
    if ( HIDWORD(v31[0]) == HIDWORD(v34[0])
      || SHIDWORD(v31[0]) >= SHIDWORD(v34[0])
      && (unsigned __int8)sub_1273B0((unsigned __int64)v31, v24, v30, SHIDWORD(v34[0])) )
    {
      if ( (*(_BYTE *)(v24 + 48) & 0x10) != 0 && HIDWORD(v31[0]) == 8 && v28 != 14 )
        sub_967E0((__int64)&v32, v24, v30, 31);
      if ( (unsigned int)sub_944B0((const __m128i *)a1, a3, a2, (__int64)&v28, 0) )
      {
        sub_1253A0(a2, (__int64)&v28);
        sub_15BC70((unsigned int *)a2, (unsigned __int64 *)v24, 0, 0, nullptr, nullptr, (__m128i)0LL, 0);
        sub_11D5A0(a3);
        v15 = *(_QWORD *)(v25 + 64);
        if ( v15 )
        {
          v16 = v15 + 32;
          v17 = (unsigned __int8 *)(v15 + 64);
          sub_123A40((__int64)v27, (unsigned __int8 *)(v15 + 32), v13, v14);
          sub_125180(v16, v17);
          sub_125180((__int64)v17, v27);
          sub_11CDA0((__int64)v27);
        }
        v18 = *(_DWORD *)(a1 + 24);
        BYTE1(v18) &= ~2u;
        LOBYTE(v18) = v18 | 0x80;
        *(_DWORD *)(a1 + 24) = v18;
        sub_11D5D0(a2, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL));
        *((_QWORD *)&a1 + 1) = a2;
        sub_992D0(a1, 0.0);
        v19 = 1;
        goto LABEL_14;
      }
LABEL_20:
      v19 = 0;
LABEL_14:
      v26 = v19;
      sub_11CDA0((__int64)v34);
      sub_11CDA0((__int64)&v32);
      sub_11CDA0((__int64)v31);
      return v26;
    }
    if ( !under_debugger )
      sub_383060(0xC9EDu, 0.0);
LABEL_27:
    BUG();
  }
  return result;
}

