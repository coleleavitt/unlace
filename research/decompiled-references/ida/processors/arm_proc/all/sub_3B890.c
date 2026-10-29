__int64 __fastcall sub_3B890(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  unsigned int v4; // ebx
  char v5; // al
  __int64 v6; // r9
  const char *v7; // r8
  unsigned int v8; // eax
  __int64 v10; // [rsp+0h] [rbp-D8h]
  _BYTE v11[136]; // [rsp+20h] [rbp-B8h] BYREF
  unsigned __int64 v12; // [rsp+A8h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v10 = 0;
  if ( get_ea_name() <= 0 )
  {
    v4 = 0;
  }
  else
  {
    v4 = *(_WORD *)(*(_QWORD *)(a1 + 24) + 4LL) & 1;
    if ( (*(_WORD *)(*(_QWORD *)(a1 + 24) + 4LL) & 1) != 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 352LL))(a2, a3);
    }
    else
    {
      switch ( a3 )
      {
        case 0xAu:
          if ( (unsigned __int8)getinf() == 8 )
            get_qword();
          else
            get_dword();
          btoa64();
          v8 = sub_39B30(a2, 0, (__int64)&unk_86E02, 0, v11);
          break;
        case 0xBu:
          sub_39B30(a2, 0xFFFF, (__int64)&unk_86E0E, 0);
          if ( (unsigned __int8)getinf() == 8 )
            get_qword();
          else
            get_dword();
          btoa64();
          v8 = sub_39B30(a2, 0xFFFFFFFFLL, (__int64)&unk_86E22, v11);
          break;
        case 1u:
          v5 = is_weak_name();
          v7 = ", WEAK";
          if ( !v5 )
            v7 = (const char *)&unk_86D1B;
          v8 = sub_39B30(a2, 0xFFFFFFFFLL, (__int64)&unk_86DF2, 0, v7, v6, 0, (__int128)0LL);
          break;
        default:
          goto LABEL_10;
      }
    }
    v4 = v8;
  }
LABEL_10:
  if ( v10 )
    qfree();
  return v4;
}

