__int64 __fastcall sub_3A8AB0(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v3; // rdx
  __int64 v4; // r12
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // rbp
  int v8; // eax

  if ( *(_DWORD *)(a2 + 8) != 65 )
    return 0;
  if ( *(_DWORD *)(a2 + 32) == *(_DWORD *)(a1 + 80) )
  {
    v3 = **(_QWORD ***)(a1 + 64);
    if ( v3 )
    {
      v4 = 24;
      v5 = *v3 & 0xFFFFFFFFFFFFFFFCLL;
      if ( v5 )
      {
        while ( (*(_BYTE *)v5 & 2) == 0 )
        {
          v6 = *(_QWORD *)(v5 + 24);
          v4 = v5 + 24;
          if ( a2 >= v6 )
          {
            if ( v6 >= a2 )
            {
              if ( v3 == (_QWORD *)v5 )
                return 0;
              goto LABEL_11;
            }
            v5 = *(_QWORD *)(v5 + 16);
          }
          else
          {
            v5 = *(_QWORD *)(v5 + 8);
          }
        }
      }
      else
      {
LABEL_11:
        v7 = sub_3A8A40(*(__int64 **)(a1 + 72));
        *(_QWORD *)(v7 + 16) = *(_QWORD *)(v4 + 8);
        v8 = *(_DWORD *)(v4 + 16);
        *(_QWORD *)v7 = a2;
        *(_DWORD *)(v7 + 24) = v8;
        *(_DWORD *)(v7 + 28) = sub_3A6970((__int64 *)(a1 + 16), a2, 1);
      }
    }
  }
  return 0;
}

