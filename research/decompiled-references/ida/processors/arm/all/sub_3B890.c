__int64 __fastcall sub_3B890(__int64 a1, _QWORD *a2, unsigned __int8 a3)
{
  __int64 v3; // r13
  unsigned int v5; // ebx
  char v6; // al
  __int64 v7; // r9
  const char *v8; // r8
  unsigned int v9; // eax
  __int64 v11; // [rsp+0h] [rbp-D8h]
  _BYTE v12[136]; // [rsp+20h] [rbp-B8h] BYREF
  unsigned __int64 v13; // [rsp+A8h] [rbp-30h]

  v3 = a2[2];
  v13 = __readfsqword(0x28u);
  v11 = 0;
  if ( get_ea_name() <= 0 )
  {
    v5 = 0;
  }
  else
  {
    v5 = *(_WORD *)(*(_QWORD *)(a1 + 24) + 4LL) & 1;
    if ( (*(_WORD *)(*(_QWORD *)(a1 + 24) + 4LL) & 1) != 0 )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a2 + 352LL))(a2, a3);
    }
    else
    {
      switch ( a3 )
      {
        case 0xAu:
          if ( (unsigned __int8)getinf(9) == 8 )
            get_qword();
          else
            get_dword(v3);
          btoa64();
          v9 = sub_39B30((__int64)a2, 0, (__int64)&unk_86E02, 0, v12);
          break;
        case 0xBu:
          sub_39B30((__int64)a2, 0xFFFF, (__int64)&unk_86E0E, 0);
          if ( (unsigned __int8)getinf(9) == 8 )
            get_qword();
          else
            get_dword(v3);
          btoa64();
          v9 = sub_39B30((__int64)a2, 0xFFFFFFFFLL, (__int64)&unk_86E22, v12);
          break;
        case 1u:
          v6 = is_weak_name();
          v8 = ", WEAK";
          if ( !v6 )
            v8 = (const char *)&unk_86D1B;
          v9 = sub_39B30((__int64)a2, 0xFFFFFFFFLL, (__int64)&unk_86DF2, 0, v8, v7, 0, (__int128)0LL);
          break;
        default:
          goto LABEL_10;
      }
    }
    v5 = v9;
  }
LABEL_10:
  if ( v11 )
    qfree(v11);
  return v5;
}
