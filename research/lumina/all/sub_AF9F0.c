__int64 __fastcall sub_AF9F0(__int64 *a1, char **a2, __int64 a3)
{
  char *v3; // rbx
  unsigned int v4; // r13d
  unsigned int v6; // r15d
  char *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r15
  char *v10; // [rsp+0h] [rbp-68h]
  __int64 v11; // [rsp+0h] [rbp-68h]
  char *v12; // [rsp+8h] [rbp-60h]
  char *v13; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v14[9]; // [rsp+20h] [rbp-48h] BYREF

  v14[1] = __readfsqword(0x28u);
  v13 = *a2;
  v3 = &v13[a3];
  if ( !__CFADD__(a3, v13) )
  {
    v4 = sub_6B1B0(a1, (const void **)&v13, (unsigned __int64)&v13[a3]);
    if ( (_BYTE)v4 )
    {
      v14[0] = v13;
      v10 = v13;
      v6 = sub_196ED0(v14, v3);
      v7 = (char *)v14[0];
      v13 = (char *)v14[0];
      if ( (unsigned __int64)v10 < v14[0] )
      {
        v8 = v6;
        if ( v6 != a1[4] )
        {
          v12 = (char *)v14[0];
          sub_A0ED0(a1 + 3, v6);
          v7 = v12;
          v8 = v6;
        }
        if ( !v6 )
        {
LABEL_13:
          *a2 = v7;
          return v4;
        }
        v9 = 0;
        v11 = 24 * v8;
        while ( (unsigned __int8)sub_6B1B0((__int64 *)(v9 + a1[3]), (const void **)&v13, (unsigned __int64)v3) )
        {
          v9 += 24;
          if ( v9 == v11 )
          {
            v7 = v13;
            goto LABEL_13;
          }
        }
      }
    }
  }
  return 0;
}
