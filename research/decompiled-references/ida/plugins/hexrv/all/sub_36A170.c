__int64 __fastcall sub_36A170(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // r14d
  int v3; // ebp
  _DWORD *v4; // rbx
  unsigned int v5; // ebx
  unsigned int v7; // eax
  _DWORD v8[4]; // [rsp+0h] [rbp-68h] BYREF
  _DWORD v9[6]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-40h]

  v10 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 464);
  if ( (_DWORD)v1 && (unsigned __int8)*(_QWORD *)(a1 + 328) && (unsigned int)(*(_DWORD *)(a1 + 72) - 208) > 0x2F )
  {
    sub_367BE0((__int64)v8);
    if ( v8[0] == 3 && (v2 = v1, v3 = 0, (int)v1 > 0) )
    {
      while ( 1 )
      {
        v4 = (_DWORD *)sub_138DC0((_QWORD *)a1, v3);
        sub_1C30C0(v9, a1, (__int64)v4, v4[22]);
        if ( (get_tinfo_property() & 0xF) == 0xA && !(unsigned int)compare_arglocs() )
          break;
        ++v3;
        cleanup_argloc();
        if ( v2 == v3 )
          goto LABEL_9;
      }
      v7 = v4[2];
      if ( *v4 == 4 )
        v7 = (unsigned __int16)v7;
      v5 = v7;
      cleanup_argloc();
    }
    else
    {
LABEL_9:
      v5 = -1;
    }
    cleanup_argloc();
  }
  else
  {
    return (unsigned int)-1;
  }
  return v5;
}

