__int64 __fastcall sub_2D200(int *a1, __int64 a2, int a3)
{
  __int64 v4; // rbx
  int v5; // r8d
  int v6; // r9d
  unsigned int v7; // eax
  unsigned int v8; // r14d
  int v9; // r9d
  const char *v10; // r8
  __int128 v12; // kr00_16
  __int64 v13; // rax
  int v14; // edx
  int v15; // r14d
  int v16; // r14d
  unsigned __int16 v17; // ax
  unsigned int v18; // eax
  __int64 v19; // [rsp+28h] [rbp-F0h] BYREF
  __m128i v20; // [rsp+30h] [rbp-E8h] BYREF
  __int128 v21; // [rsp+40h] [rbp-D8h]
  __int64 v22; // [rsp+50h] [rbp-C8h]
  char v23[8]; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+68h] [rbp-B0h]
  __int128 v25; // [rsp+70h] [rbp-A8h]
  __int64 v26; // [rsp+80h] [rbp-98h]
  __int128 v27; // [rsp+88h] [rbp-90h]
  __int64 v28; // [rsp+98h] [rbp-80h]
  __int128 v29; // [rsp+A0h] [rbp-78h]
  int v30; // [rsp+B4h] [rbp-64h]
  char v31; // [rsp+B8h] [rbp-60h]
  char v32; // [rsp+C0h] [rbp-58h]
  int v33; // [rsp+C8h] [rbp-50h]
  char v34; // [rsp+D0h] [rbp-48h]
  unsigned __int64 v35; // [rsp+D8h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  v4 = sub_135E0(a1, a2);
  v21 = 0;
  v22 = 0;
  v20.m128i_i64[0] = 0;
  v7 = sub_27CC0(v4, &v19, &v20, (unsigned int)a2, v5, v6);
  if ( (_BYTE)v7 )
  {
    v24 = 0;
    v26 = 0;
    v12 = v21;
    v28 = 0;
    v31 = 0;
    v34 = 0;
    v25 = 0;
    v27 = 0;
    v29 = 0;
    qmutex_lock();
    v13 = sub_2C930((_QWORD *)(v4 + 1040), v12, *((__int64 *)&v12 + 1));
    if ( !v13 )
    {
      if ( !under_debugger )
        interr();
      BUG();
    }
    v14 = *(_DWORD *)(v4 + 1072);
    if ( v14 <= 20 )
    {
      v15 = *(_DWORD *)(v13 + 88) & 8;
      if ( v15 || a3 != *(unsigned __int16 *)(v13 + 352) - *(unsigned __int16 *)(v13 + 354) )
      {
        v15 = 1000;
        if ( a3 )
          v15 = a3;
      }
    }
    else
    {
      v15 = a3;
      if ( v14 <= 27 )
      {
        v16 = *(unsigned __int16 *)(v13 + 354);
        v17 = *(_WORD *)(v13 + 352) - v16;
        v15 = a3 + v16;
        if ( a3 >= v17 )
          v15 = a3 - v17;
      }
    }
    qmutex_unlock();
    v30 = v15;
    v32 = 73;
    v18 = sub_51F90(v4 + 864, v23);
    v8 = v18;
    if ( a1 && (_BYTE)v18 )
      *a1 = v33;
    if ( v28 )
    {
      *(_QWORD *)&v29 = 0;
      qfree();
    }
    if ( v26 )
    {
      *(_QWORD *)&v27 = 0;
      qfree();
    }
    if ( v24 )
    {
      *(_QWORD *)&v25 = 0;
      qfree();
    }
    v9 = -1;
    if ( a1 )
      v9 = *a1;
    if ( (_BYTE)v8 )
      v10 = "->";
    else
      v10 = "FAILED";
  }
  else
  {
    v8 = v7;
    v9 = -1;
    v10 = "FAILED";
    if ( a1 )
      v9 = *a1;
  }
  sub_58110(v4, (unsigned int)"ext_get_slot_value(tid=%d, slot=%d) %s %d\n", a2, a3, (_DWORD)v10, v9);
  return v8;
}

