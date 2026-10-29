__int64 __fastcall sub_29A860(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r13
  _QWORD *v3; // r12
  _QWORD *v4; // rbx
  __int64 result; // rax
  _QWORD *v6; // rbp
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  _QWORD *v9; // rdx
  _QWORD *i; // rax
  _QWORD *v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx

  v2 = (_QWORD *)*a1;
  if ( !*a1 )
  {
    v3 = (_QWORD *)*a2;
    v4 = nullptr;
    if ( *a2 )
    {
      v4 = (_QWORD *)*a2;
      if ( a2[1] )
        v4 = (_QWORD *)v3[1];
    }
    return (unsigned int)-(v3 != v4);
  }
  if ( a1[1] )
  {
    v3 = (_QWORD *)*a2;
    v6 = (_QWORD *)v2[1];
    v4 = nullptr;
    if ( *a2 )
    {
      if ( a2[1] )
      {
        v4 = (_QWORD *)v3[1];
        if ( v2 != v6 && v4 != v3 )
        {
          v7 = v6[3];
          v8 = v4[3];
          if ( v7 < v8 )
            return 0xFFFFFFFFLL;
          while ( v8 >= v7 )
          {
            result = sub_29AA70(v6 + 4, v4 + 4);
            if ( (_DWORD)result )
              return result;
            if ( (*v6 & 2) == 0 )
            {
              v9 = (_QWORD *)v6[2];
              if ( (*(_BYTE *)v9 & 2) != 0 )
              {
                v12 = (_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFFCLL);
                v13 = *v12;
                if ( (*v12 & 2) == 0 )
                {
                  while ( (_QWORD *)v12[2] == v6 )
                  {
                    v6 = v12;
                    v14 = v13 & 0xFFFFFFFFFFFFFFFCLL;
                    v13 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFCLL);
                    if ( (v13 & 2) != 0 )
                    {
                      v6 = (_QWORD *)v14;
                      goto LABEL_27;
                    }
                    v12 = (_QWORD *)v14;
                  }
                }
                v6 = v12;
              }
              else
              {
                for ( i = (_QWORD *)v9[1]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[1] )
                  v9 = i;
                v6 = v9;
              }
            }
LABEL_27:
            if ( (*v4 & 2) == 0 )
            {
              v11 = (_QWORD *)v4[2];
              if ( (*(_BYTE *)v11 & 2) != 0 )
              {
                v15 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFCLL);
                v16 = *v15;
                if ( (*v15 & 2) == 0 )
                {
                  while ( (_QWORD *)v15[2] == v4 )
                  {
                    v4 = v15;
                    v17 = v16 & 0xFFFFFFFFFFFFFFFCLL;
                    v16 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCLL);
                    if ( (v16 & 2) != 0 )
                    {
                      v4 = (_QWORD *)v17;
                      goto LABEL_30;
                    }
                    v15 = (_QWORD *)v17;
                  }
                }
                v4 = v15;
              }
              else
              {
                do
                {
                  v4 = v11;
                  v11 = (_QWORD *)v11[1];
                }
                while ( (*(_BYTE *)v11 & 2) == 0 );
              }
            }
LABEL_30:
            if ( v2 == v6 || v3 == v4 )
              goto LABEL_9;
            v7 = v6[3];
            v8 = v4[3];
            if ( v7 < v8 )
              return 0xFFFFFFFFLL;
          }
          return 1;
        }
      }
      else
      {
        v4 = (_QWORD *)*a2;
      }
    }
  }
  else
  {
    v3 = (_QWORD *)*a2;
    if ( !*a2 )
    {
      v4 = nullptr;
      return (unsigned int)-(v3 != v4);
    }
    if ( !a2[1] )
    {
      v4 = (_QWORD *)*a2;
      return (unsigned int)-(v3 != v4);
    }
    v4 = (_QWORD *)v3[1];
    v6 = (_QWORD *)*a1;
  }
LABEL_9:
  result = v3 == v4;
  if ( v2 == v6 )
    return (unsigned int)-(v3 != v4);
  return result;
}

