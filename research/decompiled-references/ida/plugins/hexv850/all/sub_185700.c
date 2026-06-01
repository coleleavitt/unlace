__int64 __fastcall sub_185700(const __m128i *a1, __int64 a2)
{
  __int64 v3; // rdi
  int v4; // r15d
  __int64 i; // rax
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rdi
  unsigned int v9; // r15d
  char v11; // al
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int32 v17; // eax
  __int64 v18; // [rsp+10h] [rbp-140h]
  unsigned __int8 *v19; // [rsp+10h] [rbp-140h]
  unsigned __int8 *v20; // [rsp+18h] [rbp-138h]
  __int64 v21; // [rsp+20h] [rbp-130h]
  unsigned __int8 *v22; // [rsp+28h] [rbp-128h]
  __int64 v23; // [rsp+30h] [rbp-120h]
  __int64 v24; // [rsp+48h] [rbp-108h]
  _QWORD v25[2]; // [rsp+70h] [rbp-E0h] BYREF
  _QWORD v26[2]; // [rsp+80h] [rbp-D0h] BYREF
  _QWORD v27[2]; // [rsp+90h] [rbp-C0h] BYREF
  _QWORD v28[2]; // [rsp+A0h] [rbp-B0h] BYREF
  _QWORD v29[2]; // [rsp+B0h] [rbp-A0h] BYREF
  _QWORD v30[2]; // [rsp+C0h] [rbp-90h] BYREF
  _QWORD v31[4]; // [rsp+D0h] [rbp-80h] BYREF
  __int64 v32; // [rsp+F0h] [rbp-60h] BYREF
  int v33; // [rsp+F8h] [rbp-58h]
  __int64 v34; // [rsp+100h] [rbp-50h] BYREF
  __int64 v35; // [rsp+108h] [rbp-48h]
  unsigned __int64 v36; // [rsp+118h] [rbp-38h]

  v3 = a1[4].m128i_i64[0];
  v36 = __readfsqword(0x28u);
  if ( *(_QWORD *)(*(_QWORD *)(v3 + 1344) + 8LL) )
  {
    v12 = *(_QWORD *)(a2 + 24);
    v33 = 0;
    v9 = 0;
    v32 = v12;
    if ( (sub_132AB0(v3, (__int64)&v32) & 7) != 0 )
      return v9;
    v3 = a1[4].m128i_i64[0];
  }
  v4 = 0;
  v24 = *(_QWORD *)(v3 + 1504);
  sub_11FAC0((__int64)v30, (__int64)a1, a2, 1u);
  if ( *(_BYTE *)(a2 + 64) == 8 )
    v4 = *(_DWORD *)(*(_QWORD *)(a2 + 72) + 284LL);
  for ( i = sub_11DE10(*(_QWORD *)(a2 + 16)); ; i = sub_11DE10(*(_QWORD *)(v6 + 16)) )
  {
    v6 = i;
    if ( !i )
      goto LABEL_14;
    v7 = 0;
    if ( *(_BYTE *)(v6 + 64) == 8 )
      v7 = *(_DWORD *)(*(_QWORD *)(v6 + 72) + 284LL);
    if ( v4 == v7 )
      break;
    sub_122E60((__int64)&v32, (__int64)a1, v6, 1);
    if ( (unsigned __int8)sub_5FD00(&v32, v30) )
    {
      v8 = v34;
LABEL_11:
      if ( v8 )
      {
        v35 = 0;
        qfree();
      }
      qfree();
LABEL_14:
      v9 = 0;
      goto LABEL_15;
    }
    v11 = sub_312BB0(&v34, v31);
    v8 = v34;
    if ( v11 )
      goto LABEL_11;
    if ( v34 )
    {
      v35 = 0;
      qfree();
    }
    qfree();
  }
  v13 = a1[4].m128i_i64[0];
  if ( *(_QWORD *)(*(_QWORD *)(v13 + 1344) + 8LL) )
  {
    v16 = *(_QWORD *)(v6 + 24);
    v33 = 0;
    v32 = v16;
    if ( (sub_132AB0(v13, (__int64)&v32) & 7) != 0 )
      goto LABEL_14;
  }
  v25[1] = 0;
  v25[0] = 0xFFFFFFFF00000000LL;
  v26[0] = 0xFFFFFFFF00000000LL;
  v27[0] = 0xFFFFFFFF00000000LL;
  v28[0] = 0xFFFFFFFF00000000LL;
  v14 = *(_QWORD *)(a2 + 72);
  v26[1] = 0;
  v23 = v14;
  v15 = *(_QWORD *)(v14 + 24);
  v27[1] = 0;
  v28[1] = 0;
  v22 = (unsigned __int8 *)(v15 + 160);
  if ( !sub_17EC80((_BYTE *)(v15 + 160)) )
    goto LABEL_28;
  v18 = *(_QWORD *)(v6 + 72);
  v20 = (unsigned __int8 *)(*(_QWORD *)(v18 + 24) + 160LL);
  v21 = *(_QWORD *)(v18 + 24);
  sub_1205C0((__int64)v25, *(unsigned __int8 **)(v23 + 24));
  sub_11EE80((__int64)v29, v20);
  sub_17EFC0(&v32, v24, *(_QWORD *)(v6 + 24), v21, (unsigned __int64)v29, 1, 1);
  sub_1205C0((__int64)v26, (unsigned __int8 *)&v32);
  sub_1181E0((__int64)&v32);
  sub_1181E0((__int64)v29);
  if ( !(unsigned __int8)sub_129EC0(v24, a1, v6, (__int64)v25, v6, (__int64)v26, 0) )
    goto LABEL_28;
  v19 = (unsigned __int8 *)(*(_QWORD *)(v18 + 24) + 80LL);
  sub_1205C0((__int64)v27, (unsigned __int8 *)(*(_QWORD *)(v23 + 24) + 80LL));
  if ( v4 == 5 )
  {
    sub_11EE80((__int64)v29, v20);
    sub_17EFC0(&v32, v24, *(_QWORD *)(v6 + 24), (__int64)v19, (unsigned __int64)v29, 1, 1);
    sub_1205C0((__int64)v28, (unsigned __int8 *)&v32);
    sub_1181E0((__int64)&v32);
    sub_1181E0((__int64)v29);
  }
  else
  {
    sub_11EE80((__int64)&v32, v19);
    sub_1205C0((__int64)v28, (unsigned __int8 *)&v32);
    sub_1181E0((__int64)&v32);
  }
  v9 = sub_129EC0(v24, a1, v6, (__int64)v27, v6, (__int64)v28, 0);
  if ( (_BYTE)v9 )
  {
    sub_11EE80((__int64)&v32, v22);
    sub_17EFC0(v29, v24, *(_QWORD *)(v6 + 24), (__int64)v20, (unsigned __int64)&v32, 1, 0);
    sub_1181E0((__int64)&v32);
    if ( !LOBYTE(v29[0]) )
    {
      if ( !under_debugger )
        sub_37CFE0(51449);
      BUG();
    }
    sub_117E50((char *)v20, (char *)v29);
    sub_1189E0(a2);
    v17 = a1[1].m128i_i32[2];
    BYTE1(v17) &= ~2u;
    LOBYTE(v17) = v17 | 0x80;
    a1[1].m128i_i32[2] = v17;
    sub_185220(v24, (__int64)a1, v6, *(_QWORD *)(v21 + 168));
    sub_1181E0((__int64)v29);
  }
  else
  {
LABEL_28:
    v9 = 0;
  }
  sub_1181E0((__int64)v28);
  sub_1181E0((__int64)v27);
  sub_1181E0((__int64)v26);
  sub_1181E0((__int64)v25);
LABEL_15:
  if ( v31[0] )
  {
    v31[1] = 0;
    qfree();
  }
  qfree();
  return v9;
}

