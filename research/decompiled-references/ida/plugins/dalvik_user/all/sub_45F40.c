__int64 __fastcall sub_45F40(__int64 a1, unsigned int a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rdi
  unsigned __int64 v6; // rax
  bool v7; // sf
  int v8; // edi
  unsigned __int32 v9; // esi
  char v10; // al
  unsigned __int8 v11; // dl
  unsigned __int8 v12; // si
  const char *v13; // rdx
  __int16 v15; // dx
  __int64 v16; // rax
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // r12
  _QWORD *v19; // [rsp+8h] [rbp-50h] BYREF
  const char *v20; // [rsp+10h] [rbp-48h] BYREF
  __int128 v21; // [rsp+18h] [rbp-40h]
  unsigned __int64 v22; // [rsp+28h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  v3 = operator new(0x20u);
  *(_QWORD *)(v3 + 16) = 0;
  v4 = v3;
  *(_QWORD *)v3 = 0;
  *(_QWORD *)(v3 + 8) = 0;
  *(_DWORD *)(v3 + 23) = 0;
  v5 = *(_QWORD *)(a1 + 40);
  v19 = (_QWORD *)v3;
  v6 = sub_5D6A0(v5, v3 + 16, 11, a2);
  if ( v6 <= 0xA )
  {
    sub_44B20(a1);
    goto LABEL_10;
  }
  if ( v6 == 11 )
  {
    v7 = *(char *)(v4 + 24) < 0;
    v8 = _byteswap_ulong(*(_DWORD *)(v4 + 16));
    v9 = _byteswap_ulong(*(_DWORD *)(v4 + 20));
    *(_DWORD *)(v4 + 16) = v8;
    *(_DWORD *)(v4 + 20) = v9;
    v10 = byte_7FBE9;
    if ( v7 )
    {
      v15 = __ROL2__(*(_WORD *)(v4 + 25), 8);
      *(_WORD *)(v4 + 25) = v15;
      if ( !v10 )
        goto LABEL_13;
      *(_DWORD *)(a1 + 52) = v9;
      if ( v15 )
      {
        sub_11340((__int64)"<%d error_code=%hd\n", v9, v15);
      }
      else
      {
        if ( v8 != 11 )
        {
          if ( v8 > 10 )
          {
LABEL_19:
            *(_QWORD *)(v4 + 8) = v8 - 11;
            v16 = qalloc();
            v17 = *(_QWORD *)(v4 + 8);
            *(_QWORD *)v4 = v16;
            v18 = sub_5D6A0(*(_QWORD *)(a1 + 40), v16, v17, 10000);
            if ( v18 < v17 )
              sub_44B20(a1);
            if ( *(_QWORD *)(v4 + 8) == v18 )
              goto LABEL_15;
            goto LABEL_10;
          }
LABEL_25:
          sub_11270((__int64)"JDWP error: bad command packet");
          goto LABEL_10;
        }
        sub_11340((__int64)"<%d OK\n", v9);
      }
    }
    else
    {
      if ( !byte_7FBE9 )
        goto LABEL_13;
      *(_DWORD *)(a1 + 52) = v9;
      v11 = *(_BYTE *)(v4 + 26);
      v12 = *(_BYTE *)(v4 + 25);
      v21 = 0;
      v20 = nullptr;
      sub_452D0((__int64 *)&v20, v12, v11);
      v13 = nptr;
      if ( (_QWORD)v21 )
        v13 = v20;
      sub_11340((__int64)"<%d %s\n", *(_DWORD *)(a1 + 52), v13);
      if ( v20 )
      {
        *(_QWORD *)&v21 = 0;
        qfree();
      }
    }
    v8 = *(_DWORD *)(v4 + 16);
LABEL_13:
    if ( v8 > 10 )
    {
      if ( v8 == 11 )
      {
LABEL_15:
        v19 = nullptr;
        goto LABEL_11;
      }
      goto LABEL_19;
    }
    goto LABEL_25;
  }
LABEL_10:
  v4 = 0;
LABEL_11:
  sub_44B80(&v19);
  return v4;
}

