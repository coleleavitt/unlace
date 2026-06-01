__int64 __fastcall sub_264BE0(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  __int64 v4; // r15
  unsigned int v5; // ebp
  __int64 v8; // rdi
  __int64 v10; // rdx
  int v11; // eax
  char v12; // r14
  unsigned int v13; // r9d
  int v14; // r14d
  int v15; // eax
  unsigned int v16; // r8d
  __int64 (__fastcall *v17)(_QWORD *, _QWORD, void *, const char *); // r11
  const char *v19; // rcx
  int v20; // eax
  unsigned int v21; // r9d
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned int v24; // [rsp+4h] [rbp-84h]
  unsigned int v25; // [rsp+4h] [rbp-84h]
  __int64 (__fastcall **v26)(); // [rsp+10h] [rbp-78h] BYREF
  __int64 v27; // [rsp+18h] [rbp-70h]
  __int128 v28; // [rsp+20h] [rbp-68h]
  int v29; // [rsp+30h] [rbp-58h]
  __int64 v30; // [rsp+38h] [rbp-50h]
  char v31; // [rsp+40h] [rbp-48h]
  unsigned __int64 v32; // [rsp+48h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  if ( !a4[5] )
    return 0;
  v4 = *(_QWORD *)(a2 + 816);
  v5 = *(_DWORD *)(v4 + 8);
  if ( v5 )
  {
    return 0;
  }
  else
  {
    *(_DWORD *)(v4 + 8) = 1;
    v8 = a4[5];
    if ( a1 )
    {
      v10 = *(_QWORD *)a1;
      v11 = *(_DWORD *)(a1 + 8);
    }
    else
    {
      v10 = -1;
      v11 = 0;
    }
    v24 = a3;
    v26 = (__int64 (__fastcall **)())v10;
    LODWORD(v27) = v11;
    v12 = sub_253620(v8, (unsigned __int64 *)&v26);
    v13 = get_merge_state() & 3;
    if ( !v13 )
    {
      v14 = v12 & 1;
      if ( v14 )
      {
        v15 = *(_DWORD *)(a1 + 8);
        v16 = v24;
        v17 = *(__int64 (__fastcall **)(_QWORD *, _QWORD, void *, const char *))*a4;
        if ( v15 > 69 )
        {
          v19 = (const char *)&unk_3FC793;
          if ( (unsigned int)v15 <= 0x54 )
          {
            v19 = (const char *)*(&off_4C07A0 + v15);
            if ( v15 == 83 )
            {
              if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 64LL) )
                v19 = "__wind";
            }
          }
          v25 = v13;
          v20 = v17(a4, v16, &unk_3FD0D2, v19);
          v21 = v25;
          v22 = (unsigned int)(*(_DWORD *)(a1 + 8) - 71);
          if ( (unsigned int)v22 <= 0xC )
            v21 = dword_40ED80[v22];
          sub_25DEC0((void **)a1, a2, v20, 0, "...", a4, v21);
          v23 = a4[5];
          v27 = 0;
          v30 = v23;
          v29 = 0;
          v31 = 0;
          v26 = off_4C06B8;
          v28 = 0;
          sub_263CF0(a1, 0, &v26, 0);
          v26 = (__int64 (__fastcall **)())&off_4C3D58;
          if ( v27 )
          {
            *(_QWORD *)&v28 = 0;
            qfree();
          }
          v5 = v14;
        }
        else
        {
          v5 = ((__int64 (__fastcall *)(_QWORD *, _QWORD, char *))v17)(a4, v24, "...");
        }
      }
    }
    --*(_DWORD *)(v4 + 8);
  }
  return v5;
}

