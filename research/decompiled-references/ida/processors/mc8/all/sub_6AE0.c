__int64 __fastcall sub_6AE0(_QWORD *a1, unsigned __int64 a2)
{
  unsigned int v2; // eax
  __int64 v4; // rdi
  unsigned int v5; // ebp
  unsigned __int64 v7; // r15
  char *v8; // rsi
  void (__fastcall *v9)(_QWORD *, char *, __int64); // rax
  char *v10; // r12
  char *v11; // r14
  char *v12; // rax
  signed __int64 v13; // r8
  __int64 v14; // rdx
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // [rsp+0h] [rbp-68h]
  signed __int64 v17; // [rsp+0h] [rbp-68h]
  signed __int64 v18; // [rsp+8h] [rbp-60h]
  signed __int64 v19; // [rsp+8h] [rbp-60h]
  char *s; // [rsp+10h] [rbp-58h] BYREF
  __int128 v21; // [rsp+18h] [rbp-50h]
  unsigned __int64 v22; // [rsp+28h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  v4 = a1[77];
  v21 = 0;
  s = nullptr;
  LOBYTE(v2) = *(_BYTE *)(v4 + 2992) & (a2 > 0x7FFF);
  v5 = v2;
  if ( !(_BYTE)v2 )
    return v5;
  if ( sub_6280(v4, (__int64)&s, a2) )
  {
    v7 = v21;
    if ( !(_QWORD)v21 )
    {
      v8 = &byte_D688;
      v9 = *(void (__fastcall **)(_QWORD *, char *, __int64))(*a1 + 56LL);
LABEL_6:
      v9(a1, v8, 34);
      goto LABEL_7;
    }
    v10 = s;
    v11 = s;
    v12 = strchr(s, 32);
    if ( v12 )
    {
      v13 = v12 - v10;
      if ( v12 - v10 != -1 )
      {
        if ( v13 )
        {
          v15 = v13 + 1;
          if ( v7 < v13 + 1 )
          {
            if ( *((_QWORD *)&v21 + 1) < v15 )
            {
              v19 = v12 - v10;
              v17 = v13 + 1;
              s = (char *)qvector_reserve();
              v7 = v21;
              v11 = s;
              v13 = v19;
              v15 = v17;
            }
            v16 = v15;
            v18 = v13;
            memset(&v11[v7], 0, v15 - v7);
            v12 = &s[v18];
            *(_QWORD *)&v21 = v16;
          }
          else if ( v7 != v13 + 1 )
          {
            *(_QWORD *)&v21 = v13 + 1;
          }
          *v12 = 0;
          v14 = v21;
          goto LABEL_18;
        }
        if ( v10 )
        {
          *(_QWORD *)&v21 = 0;
          qfree();
          s = nullptr;
          v14 = v21;
          *((_QWORD *)&v21 + 1) = 0;
LABEL_18:
          v9 = *(void (__fastcall **)(_QWORD *, char *, __int64))(*a1 + 56LL);
          if ( !v14 )
          {
            v8 = &byte_D688;
            goto LABEL_6;
          }
          v10 = s;
          goto LABEL_20;
        }
      }
    }
    v9 = *(void (__fastcall **)(_QWORD *, char *, __int64))(*a1 + 56LL);
LABEL_20:
    v8 = v10;
    goto LABEL_6;
  }
  v5 = 0;
LABEL_7:
  if ( s )
  {
    *(_QWORD *)&v21 = 0;
    qfree();
  }
  return v5;
}

