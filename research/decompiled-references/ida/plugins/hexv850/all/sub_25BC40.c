__int64 __fastcall sub_25BC40(__int64 a1, void (__fastcall ***a2)(_QWORD, _QWORD, void *))
{
  __int64 *v2; // rdx
  __int64 result; // rax
  unsigned __int64 v4; // rbx
  char v7; // si
  const char *v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned __int64 v11; // rdi

  v2 = *(__int64 **)(a1 + 72);
  result = *v2;
  if ( *v2 )
  {
    if ( v2[1] )
    {
      v4 = *(_QWORD *)(result + 8);
      if ( result != v4 )
      {
        v7 = 0;
        while ( 1 )
        {
LABEL_5:
          if ( !*(_BYTE *)(v4 + 64) )
          {
            if ( !v7 )
              (**a2)(a2, 0, &unk_3F6097);
            v8 = s1;
            if ( *(_QWORD *)(v4 + 48) )
              v8 = *(const char **)(v4 + 40);
            ((void (__fastcall *)(void (__fastcall ***)(_QWORD, _QWORD, void *), _QWORD, void *, const char *))**a2)(
              a2,
              0,
              &unk_3F60B0,
              v8);
            v2 = *(__int64 **)(a1 + 72);
            v7 = 1;
          }
          result = *(_QWORD *)v4;
          if ( (*(_QWORD *)v4 & 2) != 0 )
            goto LABEL_14;
          v9 = *(_QWORD *)(v4 + 16);
          if ( (*(_BYTE *)v9 & 2) != 0 )
          {
            result &= 0xFFFFFFFFFFFFFFFCLL;
            v10 = *(_QWORD *)result;
            if ( (*(_QWORD *)result & 2) == 0 )
            {
              while ( *(_QWORD *)(result + 16) == v4 )
              {
                v4 = result;
                v11 = v10 & 0xFFFFFFFFFFFFFFFCLL;
                v10 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v10 & 2) != 0 )
                {
                  v4 = v11;
                  if ( *v2 != v11 )
                    goto LABEL_5;
                  goto LABEL_15;
                }
                result = v11;
              }
            }
            v4 = result;
            if ( *v2 == result )
            {
LABEL_15:
              if ( v7 )
                return ((__int64 (__fastcall *)(_QWORD, _QWORD, void *))**a2)(a2, 0, &unk_3F60B8);
              return result;
            }
          }
          else
          {
            do
            {
              v4 = v9;
              v9 = *(_QWORD *)(v9 + 8);
            }
            while ( (*(_BYTE *)v9 & 2) == 0 );
LABEL_14:
            if ( *v2 == v4 )
              goto LABEL_15;
          }
        }
      }
    }
  }
  return result;
}

