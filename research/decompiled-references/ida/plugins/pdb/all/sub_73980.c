__int64 __fastcall sub_73980(_QWORD *a1, __int64 **a2)
{
  __int64 *v3; // rdi
  unsigned int v4; // r12d
  unsigned int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 *v8; // rdi
  __int64 v9; // rcx
  __int16 v11; // [rsp+Eh] [rbp-3Ah] BYREF
  _QWORD v12[7]; // [rsp+10h] [rbp-38h] BYREF

  v3 = *a2;
  v12[1] = __readfsqword(0x28u);
  v4 = (*(__int64 (__fastcall **)(__int64 *))(*v3 + 32))(v3);
  v5 = (*(__int64 (__fastcall **)(__int64 *, __int16 *, __int64))(**a2 + 48))(*a2, &v11, 2);
  if ( (_BYTE)v5 )
  {
    v6 = v5;
    v7 = (unsigned __int16)v11;
    if ( v11 < 0 )
    {
      v8 = *a2;
      LOWORD(v7) = v11 + 0x8000;
      v9 = **a2;
      switch ( v7 )
      {
        case 0LL:
          if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD *, __int64))(v9 + 48))(v8, v12, 1) )
            return 0;
          *a1 = SLOBYTE(v12[0]);
          return v6;
        case 1LL:
          if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD *, __int64))(v9 + 48))(v8, v12, 2) )
            return 0;
          *a1 = SLOWORD(v12[0]);
          return v6;
        case 2LL:
          if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD *, __int64))(v9 + 48))(v8, v12, 2) )
            return 0;
          *a1 = LOWORD(v12[0]);
          return v6;
        case 3LL:
          if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD *, __int64))(v9 + 48))(v8, v12, 4) )
            return 0;
          *a1 = SLODWORD(v12[0]);
          return v6;
        case 4LL:
          if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD *, __int64))(v9 + 48))(v8, v12, 4) )
            return 0;
          *a1 = LODWORD(v12[0]);
          return v6;
        case 9LL:
        case 10LL:
          if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD *, __int64))(v9 + 48))(v8, v12, 8) )
            return 0;
          v7 = v12[0];
          break;
        default:
          if ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(v9 + 40))(v8, v4) )
            sub_73830(a2);
          return 0;
      }
    }
    *a1 = v7;
  }
  else
  {
    return 0;
  }
  return v6;
}

