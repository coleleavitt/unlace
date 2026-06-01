__int64 __fastcall sub_3A4EA0(__int64 a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r11
  __int64 v9; // rbx
  unsigned int v10; // edx
  __int64 v11; // rsi
  unsigned __int64 v12; // rsi

  v2 = *a2;
  if ( *a2 != -1 )
  {
    v3 = *(_QWORD *)(a1 + 224);
    if ( v3 )
    {
      v4 = *(_QWORD *)(a1 + 216);
      v6 = 0;
      v7 = -1;
      v8 = -1;
      v9 = -1;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( v2 != **(_QWORD **)v4 )
            goto LABEL_7;
          v10 = *(_DWORD *)(v4 + 24) - *((_DWORD *)a2 + 2);
          if ( (v10 & 0x80000000) != 0 )
            v10 = *((_DWORD *)a2 + 2) - *(_DWORD *)(v4 + 24);
          if ( v7 < v10 )
            goto LABEL_7;
          v11 = *((_DWORD *)a2 + 3) - *(_DWORD *)(v4 + 28);
          if ( v11 < 0 )
            break;
          if ( v10 >= v7 )
          {
            if ( v11 < v8 )
            {
              v9 = v6;
              if ( !(v10 | (unsigned __int64)v11) )
                return v9;
              v7 = v10;
              v8 = *((_DWORD *)a2 + 3) - *(_DWORD *)(v4 + 28);
            }
          }
          else
          {
            v9 = v6;
            v8 = *((_DWORD *)a2 + 3) - *(_DWORD *)(v4 + 28);
            if ( !(v10 | (unsigned __int64)v11) )
              return v9;
            v7 = v10;
          }
LABEL_7:
          ++v6;
          v4 += 48;
          if ( v3 == v6 )
            return v9;
        }
        v12 = -v11;
        if ( v10 >= v7 )
        {
          if ( v12 < v8 )
          {
            v9 = v6;
            v7 = v10;
            v8 = v12;
          }
          goto LABEL_7;
        }
        v9 = v6++;
        v8 = v12;
        v7 = v10;
        v4 += 48;
        if ( v3 == v6 )
          return v9;
      }
    }
  }
  return -1;
}

