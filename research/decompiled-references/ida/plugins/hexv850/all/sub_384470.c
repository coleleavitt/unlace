__int64 __fastcall sub_384470(__int64 a1, char *a2, unsigned int a3, __int64 a4, double a5)
{
  char *v7; // rdi
  unsigned int v8; // ebx
  char v10; // al
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // [rsp+0h] [rbp-B8h]
  unsigned int v14; // [rsp+0h] [rbp-B8h]
  unsigned int v15; // [rsp+0h] [rbp-B8h]
  char v16; // [rsp+Ch] [rbp-ACh]
  char *v17; // [rsp+18h] [rbp-A0h]
  __int64 v18; // [rsp+20h] [rbp-98h] BYREF
  int v19; // [rsp+28h] [rbp-90h]
  __int64 v20; // [rsp+30h] [rbp-88h]
  __int128 v21; // [rsp+38h] [rbp-80h]
  __int64 v22; // [rsp+48h] [rbp-70h]
  __int128 v23; // [rsp+50h] [rbp-68h]
  __int64 v24; // [rsp+60h] [rbp-58h]
  unsigned int v25; // [rsp+68h] [rbp-50h]
  unsigned int v26; // [rsp+6Ch] [rbp-4Ch]
  unsigned __int64 v27; // [rsp+78h] [rbp-40h]

  v7 = a2;
  v8 = 0;
  v27 = __readfsqword(0x28u);
  v17 = a2;
  if ( a2 )
  {
    while ( 1 )
    {
      v10 = *v7;
      if ( (unsigned __int8)(*v7 - 1) <= 1u )
      {
LABEL_9:
        if ( v10 == 1 && v7[1] == 40 )
        {
          v18 = -1;
          addr_from_tag();
          if ( (v18 & 0xC0000000) == 0 )
          {
            v12 = sub_3843F0(a1, v18, a5);
            if ( v12 )
            {
              v13 = v12;
              v18 = *(_QWORD *)v12;
              v19 = *(_DWORD *)(v12 + 8);
              v16 = sub_252AE0(a1, (unsigned __int64 *)&v18);
              if ( (get_merge_state() & 3) != 0 || (v16 & 1) == 0 )
              {
                result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)a4 + 8LL))(
                           a4,
                           v8,
                           a3,
                           v13);
              }
              else
              {
                a5 = 0.0;
                v18 = (__int64)&off_4B9F78;
                v19 = 0;
                v20 = 0;
                v22 = 0;
                v24 = a4;
                v25 = v8;
                v26 = a3;
                v21 = 0;
                v23 = 0;
                result = sub_2506C0(&v18, v13, 0);
                v18 = (__int64)off_4AF6D8;
                if ( v22 )
                {
                  v14 = result;
                  *(_QWORD *)&v23 = 0;
                  qfree();
                  result = v14;
                }
                if ( v20 )
                {
                  v15 = result;
                  *(_QWORD *)&v21 = 0;
                  qfree();
                  result = v15;
                }
              }
              if ( (_DWORD)result )
                return result;
            }
          }
        }
      }
      else
      {
        while ( v10 != 4 )
        {
          if ( v10 == 3 )
          {
            v17 = v7 + 1;
            v10 = v7[1];
          }
          if ( !v10 || (unsigned int)get_utf8_char() - 1 > 0xFFFFFFFD )
            return 0;
          v7 = v17;
          ++v8;
          v10 = *v17;
          if ( (unsigned __int8)(*v17 - 1) <= 1u )
            goto LABEL_9;
        }
      }
      v17 = (char *)tag_skipcode();
      v7 = v17;
    }
  }
  return 0;
}

