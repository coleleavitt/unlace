unsigned __int64 __fastcall sub_24880(__int64 a1, unsigned int **a2, int a3)
{
  unsigned int *v3; // rbx
  __int64 v4; // rbp
  unsigned int *v6; // rdi
  __int64 v7; // rax
  char *v8; // rax
  unsigned __int64 v10; // [rsp+18h] [rbp-40h]

  v10 = __readfsqword(0x28u);
  v3 = *a2;
  v4 = (__int64)&(*a2)[4 * (_QWORD)a2[1]];
  if ( (unsigned int *)v4 != *a2 )
  {
    do
    {
      while ( 1 )
      {
        if ( (~*((_BYTE *)v3 + 4) & 0xE) == 0 && *((_BYTE *)v3 + 4) <= 0x1Fu )
        {
          v6 = a2[3];
          if ( v6 )
          {
            v7 = *((_QWORD *)v6 + 2);
            if ( v7 )
            {
              if ( *v3 < (unsigned __int64)(v7 - 1) )
              {
                v8 = (char *)(*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)v6 + 16LL))(v6);
                if ( v8 )
                {
                  if ( *v8 )
                  {
                    if ( !(unsigned __int8)sub_11500(v8) )
                    {
                      netnode_supset();
                      if ( a3 >= 0 )
                        break;
                    }
                  }
                }
              }
            }
          }
        }
        v3 += 4;
        if ( (unsigned int *)v4 == v3 )
          return v10 - __readfsqword(0x28u);
      }
      v3 += 4;
      netnode_supset();
    }
    while ( (unsigned int *)v4 != v3 );
  }
  return v10 - __readfsqword(0x28u);
}

