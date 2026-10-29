void __fastcall sub_B8A50(char *a1, char *a2, __int64 a3)
{
  int *v3; // r14
  int v5; // r12d
  _BYTE *v6; // rdi
  int v7; // ebp
  _BYTE *v8; // rdi
  int v9; // eax
  int *i; // rbp
  int v11; // r12d
  _BYTE *v12; // rdi
  int v13; // r13d
  int *v14; // r15
  _BYTE *v15; // rdi
  int v16; // [rsp+Ch] [rbp-4Ch]

  if ( a1 != a2 )
  {
    v3 = (int *)(a1 + 4);
    if ( a2 != a1 + 4 )
    {
      do
      {
        while ( 1 )
        {
          v5 = *(_DWORD *)a1;
          v6 = (_BYTE *)sub_330E60(a3, *v3);
          if ( v6 != *(_BYTE **)(a3 + 56) || (v7 = 1000, *(_DWORD *)(a3 + 76) != 4) )
            v7 = sub_175240(v6);
          v8 = (_BYTE *)sub_330E60(a3, v5);
          if ( v8 != *(_BYTE **)(a3 + 56) || (v9 = 1000, *(_DWORD *)(a3 + 76) != 4) )
            v9 = sub_175240(v8);
          v16 = *v3;
          if ( v9 <= v7 )
            break;
          if ( (char *)v3 - a1 <= 4 )
          {
            if ( (char *)v3 - a1 == 4 )
              *v3 = *(_DWORD *)a1;
          }
          else
          {
            memmove(a1 + 4, a1, (char *)v3 - a1);
          }
          ++v3;
          *(_DWORD *)a1 = v16;
          if ( a2 == (char *)v3 )
            return;
        }
        for ( i = v3; ; i[1] = *i )
        {
          v13 = *(i - 1);
          v14 = i;
          v15 = (_BYTE *)sub_330E60(a3, v16);
          if ( v15 != *(_BYTE **)(a3 + 56) || (v11 = 1000, *(_DWORD *)(a3 + 76) != 4) )
            v11 = sub_175240(v15);
          v12 = (_BYTE *)sub_330E60(a3, v13);
          if ( v12 == *(_BYTE **)(a3 + 56) && *(_DWORD *)(a3 + 76) == 4 )
            break;
          --i;
          if ( (int)sub_175240(v12) <= v11 )
            goto LABEL_22;
LABEL_16:
          ;
        }
        --i;
        if ( v11 < 1000 )
          goto LABEL_16;
LABEL_22:
        ++v3;
        *v14 = v16;
      }
      while ( a2 != (char *)v3 );
    }
  }
}

