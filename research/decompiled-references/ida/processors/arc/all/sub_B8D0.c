__int64 __fastcall sub_B8D0(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v2; // ebx
  __int64 v4; // rax
  __int64 v5; // r12
  char **v6; // r13
  __int64 v7; // rax
  __int64 segm_name; // rax
  char *v9; // r14
  __int64 v10; // r15
  char *v11; // [rsp+8h] [rbp-60h]
  char *s1; // [rsp+10h] [rbp-58h] BYREF
  __int128 v13; // [rsp+18h] [rbp-50h]
  unsigned __int64 v14; // [rsp+28h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  v1 = is_loaded();
  if ( !(_BYTE)v1 )
    return 0;
  v2 = v1;
  if ( (unsigned int)getinf(5) == 25 )
  {
    v5 = 20;
    v6 = off_28EA0;
  }
  else
  {
    if ( (unsigned int)getinf(5) != 18 )
    {
LABEL_6:
      if ( (unsigned __int8)segtype(a1) == 2 )
        return v2;
      v4 = getseg(a1);
      if ( v4 )
      {
        LOBYTE(v2) = (*(_BYTE *)(v4 + 42) & 6) == 4;
        return v2;
      }
      return 0;
    }
    v5 = 7;
    v6 = off_28E60;
  }
  v7 = getseg(a1);
  if ( !v7 )
    goto LABEL_6;
  s1 = nullptr;
  v13 = 0;
  segm_name = get_segm_name(&s1, v7, 0);
  v11 = s1;
  if ( segm_name <= 0 )
  {
LABEL_17:
    if ( v11 )
    {
      *(_QWORD *)&v13 = 0;
      qfree(v11);
    }
    goto LABEL_6;
  }
  v9 = (char *)needle;
  if ( (_QWORD)v13 )
    v9 = s1;
  v10 = 0;
  while ( strcmp(v9, v6[v10]) )
  {
    if ( v5 == ++v10 )
      goto LABEL_17;
  }
  if ( v11 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v11);
  }
  return v2;
}

