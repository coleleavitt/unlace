__int64 __fastcall sub_3400(__int64 a1, int a2, int a3)
{
  const char *v3; // rax
  int v5; // edx
  int *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r13
  unsigned int v10; // ebp
  __m128i *v11; // r12
  _QWORD v13[2]; // [rsp+10h] [rbp-148h] BYREF
  __int64 (__fastcall **v14)(); // [rsp+20h] [rbp-138h] BYREF
  int v15; // [rsp+28h] [rbp-130h]
  unsigned int v16; // [rsp+2Ch] [rbp-12Ch]
  __int128 v17; // [rsp+30h] [rbp-128h]
  __int64 v18; // [rsp+40h] [rbp-118h]
  const char *v19; // [rsp+48h] [rbp-110h]
  int v20; // [rsp+50h] [rbp-108h]
  __m128i v21; // [rsp+58h] [rbp-100h] BYREF
  int v22; // [rsp+68h] [rbp-F0h]
  char v23; // [rsp+70h] [rbp-E8h] BYREF
  char v24; // [rsp+B8h] [rbp-A0h] BYREF
  int v25; // [rsp+D0h] [rbp-88h] BYREF
  __int64 v26; // [rsp+D8h] [rbp-80h]
  char v27; // [rsp+E0h] [rbp-78h]
  int v28; // [rsp+E4h] [rbp-74h]
  __int64 v29; // [rsp+E8h] [rbp-70h]
  char v30; // [rsp+F0h] [rbp-68h]
  __int64 v31; // [rsp+F8h] [rbp-60h]
  __int128 v32; // [rsp+100h] [rbp-58h]
  unsigned __int64 v33; // [rsp+118h] [rbp-40h]

  v3 = "RTTI descriptor problems";
  v33 = __readfsqword(0x28u);
  v5 = 2563;
  if ( !(_BYTE)a2 )
  {
    v3 = "RTTI descriptors";
    v5 = 2819;
  }
  v19 = v3;
  v17 = -1;
  v6 = (int *)&v23;
  v14 = (__int64 (__fastcall **)())&unk_6D00;
  v15 = -16777212;
  v16 = v5;
  v18 = 0;
  v20 = 3;
  v22 = -1;
  v21 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_6CE8), (__m128i)(unsigned __int64)off_6CD0);
  do
  {
    *(_QWORD *)v6 = 0;
    v6 += 6;
    *((_OWORD *)v6 - 1) = 0;
  }
  while ( &v25 != v6 );
  v25 = 0;
  v7 = v16;
  if ( ((v16 >> 19) & 0x3F) != 0 )
  {
    if ( HIBYTE(v15) != 0xFF )
    {
      if ( !under_debugger )
        interr();
      BUG();
    }
    v7 = v16 & 0xFE07FFFF;
    HIBYTE(v15) = ((v16 >> 19) & 0x3F) - 1;
    v16 &= 0xFE07FFFF;
  }
  v26 = a1;
  v14 = off_6AD8;
  v27 = a2;
  v28 = a3;
  v29 = -1;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  callui(11, v13, v7);
  v13[1] = v13[0];
  v8 = callui(16, 0, &v14);
  if ( v8 == -2 )
  {
    v10 = a2 ^ 1;
  }
  else
  {
    if ( v8 >= 0 && v8 < (unsigned __int64)v32 )
    {
      v9 = *(unsigned int *)(v31 + 4 * v8);
      if ( !(_BYTE)a2 && (netnode_charval() & 0x10) != 0 )
        v9 -= 4;
      callui(115, v9, 0xFFFFFFFFLL);
      goto LABEL_13;
    }
    if ( !(_BYTE)a2 || (_QWORD)v32 || a3 != 2 )
    {
LABEL_13:
      v10 = 1;
      goto LABEL_14;
    }
    if ( netnode_supfirst() == -1 && (unsigned int)sub_31D0() == 1 )
    {
      sub_32B0();
      v10 = 0;
    }
    else
    {
      v10 = 0;
    }
  }
LABEL_14:
  v14 = off_6AD8;
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree();
  }
  v14 = (__int64 (__fastcall **)())&unk_6D00;
  v11 = (__m128i *)&v24;
  do
  {
    if ( v11->m128i_i64[0] )
    {
      v11->m128i_i64[1] = 0;
      qfree();
    }
    v11 = (__m128i *)((char *)v11 - 24);
  }
  while ( &v21 != v11 );
  return v10;
}

