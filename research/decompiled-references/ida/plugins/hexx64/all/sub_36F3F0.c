__int64 __fastcall sub_36F3F0(__int64 a1, double a2)
{
  __int64 v2; // rbx
  int v3; // r14d
  int v4; // ebp
  _DWORD *v5; // rbx
  unsigned int v6; // ebx
  unsigned int v8; // eax
  _DWORD v9[4]; // [rsp+0h] [rbp-68h] BYREF
  _DWORD v10[6]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-40h]

  v11 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 464);
  if ( (_DWORD)v2 && (unsigned __int8)*(_QWORD *)(a1 + 328) && (unsigned int)(*(_DWORD *)(a1 + 72) - 208) > 0x2F )
  {
    sub_36CE60((__int64)v9);
    if ( v9[0] == 3 && (v3 = v2, v4 = 0, (int)v2 > 0) )
    {
      while ( 1 )
      {
        v5 = (_DWORD *)sub_13D280((_QWORD *)a1, v4, a2);
        sub_1C7740(v10, a1, (__int64)v5, (unsigned int)v5[22], a2);
        if ( (get_tinfo_property() & 0xF) == 0xA && !(unsigned int)compare_arglocs() )
          break;
        ++v4;
        cleanup_argloc();
        if ( v3 == v4 )
          goto LABEL_9;
      }
      v8 = v5[2];
      if ( *v5 == 4 )
        v8 = (unsigned __int16)v8;
      v6 = v8;
      cleanup_argloc();
    }
    else
    {
LABEL_9:
      v6 = -1;
    }
    cleanup_argloc();
  }
  else
  {
    return (unsigned int)-1;
  }
  return v6;
}

