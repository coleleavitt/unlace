__int64 __fastcall sub_3400(__int64 a1, __int64 a2, int a3)
{
  const char *v3; // rax
  int v5; // edx
  int *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r13
  unsigned int v10; // ebp
  __m128i *v11; // r12
  __int64 v12; // rdi
  _QWORD v14[2]; // [rsp+10h] [rbp-148h] BYREF
  __int64 (__fastcall **v15)(); // [rsp+20h] [rbp-138h] BYREF
  int v16; // [rsp+28h] [rbp-130h]
  unsigned int v17; // [rsp+2Ch] [rbp-12Ch]
  __int128 v18; // [rsp+30h] [rbp-128h]
  __int64 v19; // [rsp+40h] [rbp-118h]
  const char *v20; // [rsp+48h] [rbp-110h]
  int v21; // [rsp+50h] [rbp-108h]
  __m128i v22; // [rsp+58h] [rbp-100h] BYREF
  int v23; // [rsp+68h] [rbp-F0h]
  char v24; // [rsp+70h] [rbp-E8h] BYREF
  char v25; // [rsp+B8h] [rbp-A0h] BYREF
  int v26; // [rsp+D0h] [rbp-88h] BYREF
  __int64 v27; // [rsp+D8h] [rbp-80h]
  char v28; // [rsp+E0h] [rbp-78h]
  int v29; // [rsp+E4h] [rbp-74h]
  __int64 v30; // [rsp+E8h] [rbp-70h]
  char v31; // [rsp+F0h] [rbp-68h]
  __int64 v32; // [rsp+F8h] [rbp-60h]
  __int128 v33; // [rsp+100h] [rbp-58h]
  unsigned __int64 v34; // [rsp+118h] [rbp-40h]

  v3 = "RTTI descriptor problems";
  v34 = __readfsqword(0x28u);
  v5 = 2563;
  if ( !(_BYTE)a2 )
  {
    v3 = "RTTI descriptors";
    v5 = 2819;
  }
  v20 = v3;
  v18 = -1;
  v6 = (int *)&v24;
  v15 = (__int64 (__fastcall **)())&unk_6D00;
  v16 = -16777212;
  v17 = v5;
  v19 = 0;
  v21 = 3;
  v23 = -1;
  v22 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_6CE8), (__m128i)(unsigned __int64)off_6CD0);
  do
  {
    *(_QWORD *)v6 = 0;
    v6 += 6;
    *((_OWORD *)v6 - 1) = 0;
  }
  while ( &v26 != v6 );
  v26 = 0;
  v7 = v17;
  if ( ((v17 >> 19) & 0x3F) != 0 )
  {
    if ( HIBYTE(v16) != 0xFF )
    {
      if ( !under_debugger )
        interr(3449, a2, v17, ((v17 >> 19) & 0x3F) - 1, 0.0);
      BUG();
    }
    v7 = v17 & 0xFE07FFFF;
    HIBYTE(v16) = ((v17 >> 19) & 0x3F) - 1;
    v17 &= 0xFE07FFFF;
  }
  v27 = a1;
  v15 = off_6AD8;
  v28 = a2;
  v29 = a3;
  v30 = -1;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  callui(11, v14, v7);
  v14[1] = v14[0];
  v8 = callui(16, 0, &v15);
  if ( v8 == -2 )
  {
    v10 = a2 ^ 1;
  }
  else
  {
    if ( v8 >= 0 && v8 < (unsigned __int64)v33 )
    {
      v9 = *(unsigned int *)(v32 + 4 * v8);
      if ( !(_BYTE)a2 && (netnode_charval(a1, *(unsigned int *)(v32 + 4 * v8), 322) & 0x10) != 0 )
        v9 -= 4;
      callui(115, v9, 0xFFFFFFFFLL);
      goto LABEL_13;
    }
    if ( !(_BYTE)a2 || (_QWORD)v33 || a3 != 2 )
    {
LABEL_13:
      v10 = 1;
      goto LABEL_14;
    }
    if ( netnode_supfirst(a1, 66) == -1 && (unsigned int)sub_31D0() == 1 )
    {
      sub_32B0(0xBC2u, "HIDECANCEL\nAll descriptors have been deleted. Clear all temporary entries?");
      v10 = 0;
    }
    else
    {
      v10 = 0;
    }
  }
LABEL_14:
  v15 = off_6AD8;
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v32);
  }
  v15 = (__int64 (__fastcall **)())&unk_6D00;
  v11 = (__m128i *)&v25;
  do
  {
    v12 = v11->m128i_i64[0];
    if ( v11->m128i_i64[0] )
    {
      v11->m128i_i64[1] = 0;
      qfree(v12);
    }
    v11 = (__m128i *)((char *)v11 - 24);
  }
  while ( &v22 != v11 );
  return v10;
}
