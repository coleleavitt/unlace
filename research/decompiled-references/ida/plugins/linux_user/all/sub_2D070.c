__int64 __fastcall sub_2D070(__int64 a1, __int64 a2, int a3, __int64 (***a4)())
{
  __int64 v4; // r9
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rtt
  int v12; // r13d
  unsigned __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // r15
  __int64 *v16; // rdx
  __int64 (*v17)(); // rax
  unsigned int v18; // r15d
  __int64 v19; // rdi
  __int64 v20; // r12
  __int64 v21; // rbp
  _QWORD *v22; // rbx
  unsigned __int64 v26; // [rsp+18h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v28; // [rsp+28h] [rbp-B0h]
  _QWORD v29[3]; // [rsp+40h] [rbp-98h] BYREF
  unsigned __int64 v30; // [rsp+58h] [rbp-80h]
  __int64 v31; // [rsp+60h] [rbp-78h]
  __int64 v32; // [rsp+68h] [rbp-70h]
  __int128 v33; // [rsp+70h] [rbp-68h]
  __int64 v34; // [rsp+80h] [rbp-58h]
  __int64 v35; // [rsp+88h] [rbp-50h]
  unsigned __int64 v36; // [rsp+98h] [rbp-40h]

  v4 = *(_QWORD *)(a2 + 56);
  v5 = *(_QWORD *)(a2 + 24);
  v36 = __readfsqword(0x28u);
  v29[1] = a1;
  v29[2] = v5;
  v30 = 0;
  v31 = v4;
  v32 = 0;
  v34 = 0;
  v29[0] = &off_44F68;
  v35 = 0;
  v33 = 0;
  v6 = sub_28BD0((_QWORD *)(a1 + 80), a2);
  if ( v10 )
  {
    v11 = v6;
    v6 /= v10;
    v7 = v11 % v10;
  }
  v30 = v6;
  v12 = 0;
  while ( (unsigned __int8)sub_2CC70((__int64)v29, &v26, v7, v8, v9, v10) )
  {
    if ( !v12 )
    {
      if ( !(unsigned __int8)sub_2CC70((__int64)v29, &v26, v13, v8, v9, v10) )
        break;
      v12 = 1;
    }
    v7 = v26;
    v14 = *(unsigned __int16 *)(v26 + 54);
    if ( !*(_WORD *)(v26 + 54)
      || v14 == 65280
      || v14 == 65311
      || v14 == 65521
      || (v8 = *(unsigned int *)(v26 + 48), (*(_BYTE *)(v26 + 52) & 0xFu) - 1 > 1)
      || !(_DWORD)v8 )
    {
LABEL_26:
      ++v12;
    }
    else
    {
      v15 = *(_QWORD *)(v26 + 56);
      v28 = 0;
      v27 = 0;
      if ( qword_48138 != -1 )
        v15 -= qword_48138;
      v16 = (__int64 *)(a1 + 352);
      if ( a3 != 2 )
        v16 = (__int64 *)(a1 + 320);
      sub_2AFC0(a1, &v27, v16, v8);
      v8 = (__int64)s;
      v17 = **a4;
      if ( (_QWORD)v28 )
        v8 = v27;
      v7 = (unsigned __int64)sub_FC00;
      if ( v17 != sub_FC00 )
      {
        v18 = ((__int64 (__fastcall *)(__int64 (***)(), __int64, __int64))v17)(a4, v15, v8);
        if ( v27 )
        {
          *(_QWORD *)&v28 = 0;
          qfree();
        }
        if ( v18 )
          goto LABEL_28;
        goto LABEL_26;
      }
      if ( !v27 )
        goto LABEL_26;
      *(_QWORD *)&v28 = 0;
      ++v12;
      qfree();
    }
  }
  v18 = 0;
LABEL_28:
  v19 = v32;
  v29[0] = &off_44F68;
  if ( v32 )
  {
    v20 = v33;
    if ( (_QWORD)v33 )
    {
      v21 = 0;
      do
      {
        v22 = (_QWORD *)(v19 + 96 * v21);
        if ( v22[3] )
        {
          v22[4] = 0;
          qfree();
        }
        if ( *v22 )
        {
          v22[1] = 0;
          qfree();
        }
        ++v21;
        v19 = v32;
      }
      while ( v20 != v21 );
    }
    *(_QWORD *)&v33 = 0;
    qfree();
  }
  return v18;
}

