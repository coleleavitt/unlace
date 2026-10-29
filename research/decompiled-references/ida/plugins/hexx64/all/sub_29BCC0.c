__int64 __fastcall sub_29BCC0(__int64 **a1, __int64 a2, int a3, int a4, double a5)
{
  __int64 v5; // rax
  __int64 *v6; // rbx
  unsigned int v9; // r15d
  __int64 result; // rax
  __int64 v11; // rax
  __int64 *v12; // rdx
  __int64 *v13; // rax
  __int64 v14; // rdx
  __int64 *v15; // rcx
  _QWORD v16[9]; // [rsp+10h] [rbp-48h] BYREF

  v16[1] = __readfsqword(0x28u);
  v5 = (__int64)*a1;
  if ( *a1 )
  {
    if ( a1[1] )
    {
      v6 = *(__int64 **)(v5 + 8);
      if ( (__int64 *)v5 != v6 )
      {
        v9 = 0;
        while ( 1 )
        {
          while ( 1 )
          {
LABEL_5:
            if ( a4 != -1 )
            {
              while ( v6[3] == a4 )
              {
                v11 = *v6;
                if ( (*v6 & 2) == 0 )
                  goto LABEL_9;
                if ( *a1 == v6 )
                  return v9;
              }
            }
            v16[0] = v6;
            result = sub_29BB40((__int64)a1, a2, (__int64)v16, a3, a5);
            if ( (_DWORD)result == -1 )
              return result;
            v9 += result;
            v11 = *v6;
            if ( (*v6 & 2) == 0 )
              break;
LABEL_11:
            if ( *a1 == v6 )
              return v9;
          }
LABEL_9:
          v12 = (__int64 *)v6[2];
          if ( (*(_BYTE *)v12 & 2) == 0 )
          {
            do
            {
              v6 = v12;
              v12 = (__int64 *)v12[1];
            }
            while ( (*(_BYTE *)v12 & 2) == 0 );
            goto LABEL_11;
          }
          v13 = (__int64 *)(v11 & 0xFFFFFFFFFFFFFFFCLL);
          v14 = *v13;
          if ( (*v13 & 2) == 0 )
          {
            while ( (__int64 *)v13[2] == v6 )
            {
              v6 = v13;
              v15 = (__int64 *)(v14 & 0xFFFFFFFFFFFFFFFCLL);
              v14 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v14 & 2) != 0 )
              {
                v6 = v15;
                if ( *a1 != v15 )
                  goto LABEL_5;
                return v9;
              }
              v13 = v15;
            }
          }
          v6 = v13;
          if ( *a1 == v13 )
            return v9;
        }
      }
    }
  }
  return 0;
}

