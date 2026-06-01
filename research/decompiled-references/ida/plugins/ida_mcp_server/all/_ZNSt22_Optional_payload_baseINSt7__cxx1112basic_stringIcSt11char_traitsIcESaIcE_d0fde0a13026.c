void __fastcall std::_Optional_payload_base<std::string>::_M_move_assign(__int64 a1, __int64 a2)
{
  char v2; // al
  void *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned int v7; // r8d
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // r10
  unsigned int v11; // r8d
  unsigned int v12; // r8d
  unsigned int v13; // ecx
  __int64 v14; // r9

  v2 = *(_BYTE *)(a2 + 32);
  if ( !*(_BYTE *)(a1 + 32) )
  {
    if ( !v2 )
      return;
    v4 = a1 + 16;
    v5 = a2 + 16;
    *(_QWORD *)a1 = a1 + 16;
    if ( *(_QWORD *)a2 == a2 + 16 )
    {
      v6 = *(_QWORD *)(a2 + 8);
      v7 = v6 + 1;
      if ( (unsigned int)(v6 + 1) >= 8 )
      {
        *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
        *(_QWORD *)(v4 + v7 - 8) = *(_QWORD *)(v5 + v7 - 8);
        v8 = (a1 + 24) & 0xFFFFFFFFFFFFFFF8LL;
        v9 = v4 - v8;
        v10 = v5 - v9;
        v11 = (v9 + v7) & 0xFFFFFFF8;
        if ( v11 >= 8 )
        {
          v12 = v11 & 0xFFFFFFF8;
          v13 = 0;
          do
          {
            v14 = v13;
            v13 += 8;
            *(_QWORD *)(v8 + v14) = *(_QWORD *)(v10 + v14);
          }
          while ( v13 < v12 );
        }
      }
      else
      {
        if ( (v7 & 4) != 0 )
        {
          *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
          *(_DWORD *)(v4 + v7 - 4) = *(_DWORD *)(v5 + v7 - 4);
          v6 = *(_QWORD *)(a2 + 8);
          goto LABEL_9;
        }
        if ( (_DWORD)v6 == -1 )
        {
LABEL_9:
          *(_QWORD *)(a1 + 8) = v6;
          *(_QWORD *)a2 = v5;
          *(_QWORD *)(a2 + 8) = 0;
          *(_BYTE *)(a2 + 16) = 0;
          *(_BYTE *)(a1 + 32) = 1;
          return;
        }
        *(_BYTE *)(a1 + 16) = *(_BYTE *)(a2 + 16);
        if ( (v7 & 2) != 0 )
        {
          *(_WORD *)(v4 + v7 - 2) = *(_WORD *)(v5 + v7 - 2);
          v6 = *(_QWORD *)(a2 + 8);
          goto LABEL_9;
        }
      }
    }
    else
    {
      *(_QWORD *)a1 = *(_QWORD *)a2;
      *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
    }
    v6 = *(_QWORD *)(a2 + 8);
    goto LABEL_9;
  }
  if ( v2 )
  {
    std::string::operator=(a1, (unsigned __int8 **)a2);
  }
  else
  {
    v3 = *(void **)a1;
    *(_BYTE *)(a1 + 32) = 0;
    if ( v3 != (void *)(a1 + 16) )
      operator delete(v3, *(_QWORD *)(a1 + 16) + 1LL);
  }
}

