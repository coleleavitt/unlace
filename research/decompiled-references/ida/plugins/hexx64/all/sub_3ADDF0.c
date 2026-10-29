__int64 __fastcall sub_3ADDF0(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r12
  __int64 v7; // r14
  int v8; // eax

  if ( (unsigned int)(*(_DWORD *)(a2 + 8) - 59) <= 1 && *(_DWORD *)(a2 + 32) == *(_QWORD *)(a1 + 80) )
  {
    get_tinfo_property();
    set_tinfo_property();
    if ( (unsigned __int8)compare_tinfo() )
    {
      v3 = **(_QWORD ***)(a1 + 64);
      if ( v3 )
      {
        v4 = *v3 & 0xFFFFFFFFFFFFFFFCLL;
        if ( v4 )
        {
          while ( (*(_BYTE *)v4 & 2) == 0 )
          {
            while ( 1 )
            {
              v5 = *(_QWORD *)(v4 + 24);
              if ( a2 >= v5 )
                break;
              v4 = *(_QWORD *)(v4 + 8);
              if ( (*(_BYTE *)v4 & 2) != 0 )
                goto LABEL_10;
            }
            if ( v5 >= a2 )
            {
              if ( (_QWORD *)v4 == v3 )
                break;
              goto LABEL_12;
            }
            v4 = *(_QWORD *)(v4 + 16);
          }
        }
        else
        {
LABEL_12:
          v6 = v4 + 24;
          v7 = sub_3ADCC0(*(__int64 **)(a1 + 72));
          *(_QWORD *)(v7 + 16) = *(_QWORD *)(v6 + 8);
          v8 = *(_DWORD *)(v6 + 16);
          *(_QWORD *)v7 = a2;
          *(_DWORD *)(v7 + 24) = v8;
          *(_DWORD *)(v7 + 28) = sub_3ABBF0((__int64 *)(a1 + 16), a2, 0);
        }
      }
    }
LABEL_10:
    clear_tinfo_t();
  }
  return 0;
}

