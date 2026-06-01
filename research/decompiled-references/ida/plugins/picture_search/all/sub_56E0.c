__int64 __fastcall sub_56E0(__int64 a1)
{
  __int64 v1; // rbp
  char v2; // r12
  __int64 v3; // r13
  __int64 v4; // r13
  int v5; // edx
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  const char *v9; // r15
  __int64 v10; // r13
  int v11; // edx
  int v12; // edx
  unsigned int v13; // ebp
  __int64 v15; // rsi
  __int64 v16; // rbp
  int v17; // edx
  char v18; // [rsp+27h] [rbp-1119h]
  int v19; // [rsp+28h] [rbp-1118h]
  int v20; // [rsp+2Ch] [rbp-1114h]
  __int64 v21; // [rsp+30h] [rbp-1110h]
  __int64 v22; // [rsp+58h] [rbp-10E8h] BYREF
  __int128 v23; // [rsp+60h] [rbp-10E0h]
  __int64 (__fastcall **v24)(); // [rsp+78h] [rbp-10C8h] BYREF
  __int128 v25; // [rsp+80h] [rbp-10C0h]
  __int64 *v26; // [rsp+90h] [rbp-10B0h]
  __int64 v27; // [rsp+98h] [rbp-10A8h]
  __int64 v28; // [rsp+A8h] [rbp-1098h]
  int v29; // [rsp+B0h] [rbp-1090h]
  __int128 v30; // [rsp+B8h] [rbp-1088h]
  __int128 v31; // [rsp+C8h] [rbp-1078h]
  __int64 v32; // [rsp+D8h] [rbp-1068h]
  __int128 v33; // [rsp+E0h] [rbp-1060h]
  __int64 v34; // [rsp+F0h] [rbp-1050h]
  char v35; // [rsp+F8h] [rbp-1048h] BYREF
  unsigned __int64 v36; // [rsp+1100h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  v28 = 80;
  v29 = 0;
  v32 = -1;
  v34 = 0;
  v30 = 0;
  v31 = -1;
  v33 = 0;
  idadir();
  qmakepath();
  *(_QWORD *)&v30 = &v35;
  if ( pipe_process() )
  {
    v1 = *(_QWORD *)(a1 + 32);
    v22 = 0;
    v2 = 1;
    LODWORD(v3) = v1;
    v23 = 0;
    while ( 1 )
    {
      v12 = qpipe_read();
      if ( v12 != 1 )
      {
        sub_5660("read", v3, v12, (_BYTE *)&dword_0 + 1, 0.0);
        goto LABEL_20;
      }
      if ( v18 != -16 )
        break;
      if ( !v2 )
        goto LABEL_46;
      v4 = *(_QWORD *)(a1 + 32);
      v5 = qpipe_read();
      if ( v5 != 8 )
      {
        sub_5660("read", v4, v5, &byte_8, 0.0);
        goto LABEL_20;
      }
      v6 = v21;
      if ( v21 <= 0 )
      {
        sub_5470((__int64)"0x%a: unexpected request size: %lld\n", 0.0, *(_QWORD *)(a1 + 32));
        goto LABEL_20;
      }
      v7 = *(_QWORD *)(a1 + 48);
      if ( v7 < v21 + v1 )
      {
        v2 = 0;
        v21 = v7 - v1;
        v6 = v7 - v1;
      }
      v8 = v23;
      if ( (unsigned __int64)v23 < v6 )
      {
        v15 = v22;
        if ( *((_QWORD *)&v23 + 1) < v6 )
        {
          v22 = qvector_reserve();
          v8 = v23;
          v15 = v22;
        }
        memset((void *)(v15 + v8), 0, v6 - v8);
        *(_QWORD *)&v23 = v6;
      }
      else if ( v6 != (_QWORD)v23 )
      {
        *(_QWORD *)&v23 = v6;
      }
      v25 = 0u;
      v24 = off_A5F8;
      v26 = &v22;
      v27 = v1;
      if ( !callui(86, &v24, 1, &callui) )
        goto LABEL_31;
      v9 = (const char *)v23;
      v10 = *(_QWORD *)(a1 + 32);
      v1 += v23;
      v11 = qpipe_write();
      if ( v9 != (const char *)v11 )
      {
        sub_5660("write", v10, v11, v9, 0.0);
LABEL_31:
        v24 = (__int64 (__fastcall **)())&off_AC88;
        qsem_free();
LABEL_20:
        v13 = 0;
        goto LABEL_21;
      }
      if ( !v2 && v20 != -1 )
      {
        qpipe_close();
        v20 = -1;
      }
      v24 = (__int64 (__fastcall **)())&off_AC88;
      qsem_free();
      v3 = *(_QWORD *)(a1 + 32);
    }
    if ( v18 == -14 )
    {
      sub_5470((__int64)"failed to decode picture at: 0x%a\n", 0.0);
      goto LABEL_20;
    }
    if ( v18 != -15 )
    {
LABEL_46:
      sub_5470((__int64)"0x%a: unexpected command byte: %hhx\n", 0.0, *(_QWORD *)(a1 + 32));
      goto LABEL_20;
    }
    if ( v20 != -1 )
    {
      qpipe_close();
      v20 = -1;
    }
    *(_QWORD *)(a1 + 40) = v1;
    if ( (*(_BYTE *)(a1 + 64) & 1) == 0 )
    {
LABEL_44:
      v25 = 0u;
      v24 = off_A620;
      v26 = (__int64 *)a1;
      callui(86, &v24, 2, &callui);
      v13 = 1;
      v24 = (__int64 (__fastcall **)())&off_AC88;
      qsem_free();
LABEL_21:
      if ( v22 )
      {
        *(_QWORD *)&v23 = 0;
        qfree();
      }
      if ( v20 == -1 )
      {
        if ( v19 == -1 )
        {
LABEL_25:
          term_process();
          goto LABEL_26;
        }
      }
      else
      {
        qpipe_close();
        if ( v19 == -1 )
          goto LABEL_25;
      }
      qpipe_close();
      goto LABEL_25;
    }
    v16 = *(_QWORD *)(a1 + 32);
    v17 = qpipe_read();
    if ( v17 != 4 )
    {
      sub_5660("read", v16, v17, &byte_4, 0.0);
      goto LABEL_20;
    }
    v25 = 0;
    v24 = nullptr;
    if ( (unsigned __int8)qpipe_read_n() )
    {
      if ( v19 != -1 )
      {
        qpipe_close();
        v19 = -1;
      }
      if ( (unsigned __int8)QT::QPixmap::loadFromData() )
      {
        if ( v24 )
        {
          *(_QWORD *)&v25 = 0;
          qfree();
        }
        goto LABEL_44;
      }
      sub_5470((__int64)"0x%a: failed to load into QImage\n", 0.0);
    }
    else
    {
      sub_5470((__int64)"0x%a: failed to read picture_decoder bitmap\n", 0.0);
    }
    if ( v24 )
    {
      *(_QWORD *)&v25 = 0;
      qfree();
    }
    goto LABEL_20;
  }
  sub_5470((__int64)"failed to launch picture_decoder: %s\n", (const char *)word_88EA);
  v13 = 0;
LABEL_26:
  if ( a1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v13;
}

