__int64 __fastcall sub_52BB0(unsigned __int64 a1, unsigned int a2, int a3)
{
  unsigned int v3; // r15d
  char v6; // r14
  char v7; // bl
  __int64 v8; // rax
  unsigned __int64 v9; // rsi
  __int64 i; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rax
  char *v24; // [rsp+8h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v26; // [rsp+18h] [rbp-A0h]
  __int64 v27; // [rsp+30h] [rbp-88h] BYREF
  __int64 v28; // [rsp+38h] [rbp-80h]
  unsigned __int64 v29; // [rsp+40h] [rbp-78h]
  __int64 v30; // [rsp+48h] [rbp-70h]
  __int64 v31[3]; // [rsp+50h] [rbp-68h] BYREF
  char v32; // [rsp+68h] [rbp-50h]
  unsigned __int64 v33; // [rsp+78h] [rbp-40h]

  v3 = 0;
  v33 = __readfsqword(0x28u);
  if ( (a3 | a2) <= 1 )
  {
    v6 = a2;
    v7 = a3;
    qmutex_lock();
    sub_43F20((__int64)&v27, byte_7FBE9, 0x400u);
    if ( v32 )
      sub_1FAD0(v31);
    v8 = v28;
    v9 = v29;
    for ( i = v27; v29 < v28 + 4; v9 = v29 )
    {
      v29 = v30 + v9;
      v11 = qrealloc();
      i = v11;
      if ( !v11 )
        sub_43DF0((__int64)"JDWP encoder");
      v27 = v11;
      v8 = v28;
    }
    *(_DWORD *)(i + v8) = 1196642376;
    v12 = v28 + 4;
    v28 += 4;
    if ( v32 )
    {
      sub_1FAD0(v31);
      v12 = v28;
    }
    v13 = v29;
    v14 = v27;
    if ( v29 < v12 + 4 )
    {
      do
      {
        v29 = v30 + v13;
        v15 = qrealloc();
        v14 = v15;
        if ( !v15 )
          sub_43DF0((__int64)"JDWP encoder");
        v27 = v15;
        v12 = v28;
        v13 = v29;
      }
      while ( v29 < v28 + 4 );
    }
    *(_DWORD *)(v14 + v12) = 0x2000000;
    v16 = v28 + 4;
    v28 += 4;
    if ( v32 )
    {
      sub_1FAD0(v31);
      v16 = v28;
    }
    v17 = v29;
    v18 = v27;
    if ( v29 < v16 + 1 )
    {
      do
      {
        v29 = v30 + v17;
        v19 = qrealloc();
        v18 = v19;
        if ( !v19 )
          sub_43DF0((__int64)"JDWP encoder");
        v27 = v19;
        v16 = v28;
        v17 = v29;
      }
      while ( v29 < v28 + 1 );
    }
    *(_BYTE *)(v18 + v16) = v6;
    v20 = ++v28;
    if ( v32 )
    {
      sub_1FAD0(v31);
      v20 = v28;
    }
    v21 = v29;
    v22 = v27;
    if ( v29 < v20 + 1 )
    {
      do
      {
        v29 = v30 + v21;
        v23 = qrealloc();
        v22 = v23;
        if ( !v23 )
          sub_43DF0((__int64)"JDWP encoder");
        v27 = v23;
        v20 = v28;
        v21 = v29;
      }
      while ( v29 < v28 + 1 );
    }
    *(_BYTE *)(v22 + v20) = v7;
    ++v28;
    v25 = 0;
    v26 = 0;
    v24 = sub_48F20(a1, 0xC7u, 1u, (__int64)&v27, (__int64)&v25);
    LOBYTE(v3) = v24 != nullptr;
    sub_44B80((_QWORD **)&v24);
    sub_43FA0((__int64)&v27);
    qmutex_unlock();
  }
  return v3;
}

