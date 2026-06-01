__int64 __fastcall sub_46D90(__int64 a1, __int64 a2)
{
  int v2; // edx
  unsigned int v3; // eax
  unsigned int v4; // edx
  unsigned int v5; // r12d
  char v6; // al
  unsigned int v8; // eax
  unsigned int v9; // r13d
  int v10; // edx
  unsigned __int8 v11; // al
  int v12; // eax

  v2 = *(unsigned __int8 *)(a2 + 88);
  v3 = v2 & 0xF0;
  v4 = v2 & 0xFFFFFFF0;
  if ( (_BYTE)v4 == 0xC0 )
    v3 = *(_DWORD *)(a2 + 28);
  if ( v3 <= 0x10 )
    v3 = getinf(99);
  LOBYTE(v4) = v3 == 256 || v3 == 176;
  v5 = v4;
  if ( (_BYTE)v4 )
  {
    v6 = getinf_flag(3, 4);
    return sub_44030((struct _Unwind_Exception *)a2, v6 == 0 ? 4 : 8);
  }
  else
  {
    LOBYTE(v8) = sub_46860(a1, (_DWORD *)(a2 + 40), (__int64 *)(a2 + 32), 0);
    v9 = v8;
    if ( (_BYTE)v8 )
    {
      switch ( sub_4E2D0(a1) )
      {
        case 1LL:
        case 5LL:
        case 7LL:
          v10 = 56;
          return sub_40E90(a1, (_QWORD *)a2, v10);
        case 2LL:
        case 6LL:
          v10 = 112;
          return sub_40E90(a1, (_QWORD *)a2, v10);
        case 3LL:
          goto LABEL_16;
        case 4LL:
        case 8LL:
          if ( (unsigned __int8)getinf_flag(3, 4) )
            return sub_42E60(a1, (_QWORD *)a2);
          if ( under_debugger )
            goto LABEL_23;
          interr(10245);
LABEL_16:
          v11 = sub_45840(a1, (_QWORD *)(a2 + 32));
          v12 = sub_409E0(a1, (_QWORD *)a2, 8u, (unsigned int)v11 + 3, 43);
          if ( v12 != -1 )
          {
            v5 = v9;
            *(_QWORD *)(a2 + 56) = v12;
          }
          return v5;
        case 9LL:
          if ( (unsigned __int8)getinf_flag(3, 4) )
            return sub_458E0(a1, a2, nullptr);
          if ( under_debugger )
LABEL_23:
            BUG();
          interr(10300);
          return sub_42E60(a1, (_QWORD *)a2);
        default:
          return v5;
      }
    }
    return v5;
  }
}
