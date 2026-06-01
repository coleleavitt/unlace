__int64 __fastcall sub_159B0(int *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rsi
  int v6; // r14d
  __int64 v7; // r15
  int v8; // ebp
  int v9; // r15d
  __int64 v10; // r13
  int v11; // r12d
  int v12; // r14d
  int v13; // ebp
  int v14; // ebp
  __int64 v15; // [rsp+8h] [rbp-60h]
  int v16; // [rsp+8h] [rbp-60h]
  __int64 v17; // [rsp+10h] [rbp-58h]
  __int64 v18; // [rsp+10h] [rbp-58h]
  __int64 v19; // [rsp+18h] [rbp-50h] BYREF
  int v20; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v21; // [rsp+28h] [rbp-40h]

  v19 = a3;
  v21 = __readfsqword(0x28u);
  if ( sub_7BA0(&v20, &v19, 0) )
  {
    v6 = v20;
    sub_13370(a3, (__int64)"%s: 0x%x", "Static field count", v20);
    v7 = v19;
    sub_5F10(a3, v19);
    if ( sub_7BA0(&v20, &v19, 0) )
    {
      v8 = v20;
      sub_13370(v7, (__int64)"%s: 0x%x", "Instance field count", v20);
      v15 = v19;
      sub_5F10(v7, v19);
      if ( sub_7BA0(&v20, &v19, 0) )
      {
        v9 = v20;
        sub_13370(v15, (__int64)"%s: 0x%x", "Direct method count", v20);
        v17 = v19;
        sub_5F10(v15, v19);
        if ( sub_7BA0(&v20, &v19, 0) )
        {
          v10 = v17;
          v11 = 0;
          v16 = v20;
          sub_13370(v17, (__int64)"%s: 0x%x", "Virtual method count", v20);
          v18 = v19;
          sub_5F10(v10, v19);
          v4 = v18;
          if ( v6 )
          {
            while ( 1 )
            {
              v19 = sub_145B0((__int64)a1, v4, v11, "static");
              v4 = v19;
              if ( v19 == -1 )
                break;
              if ( ++v11 == v6 )
                goto LABEL_10;
            }
          }
          else
          {
LABEL_10:
            if ( v8 )
            {
              v12 = 0;
              while ( 1 )
              {
                v19 = sub_145B0((__int64)a1, v4, v12, "instance");
                v4 = v19;
                if ( v19 == -1 )
                  break;
                if ( ++v12 == v8 )
                  goto LABEL_14;
              }
            }
            else
            {
LABEL_14:
              if ( v9 )
              {
                v13 = 0;
                while ( 1 )
                {
                  v19 = sub_156D0(a1, v4, v13, "direct");
                  v4 = v19;
                  if ( v19 == -1 )
                    break;
                  if ( ++v13 == v9 )
                    goto LABEL_18;
                }
              }
              else
              {
LABEL_18:
                if ( !v16 )
                  return v4;
                v14 = 0;
                while ( 1 )
                {
                  v19 = sub_156D0(a1, v4, v14, "virtual");
                  v4 = v19;
                  if ( v19 == -1 )
                    break;
                  if ( ++v14 == v16 )
                    return v4;
                }
              }
            }
          }
        }
      }
    }
  }
  return -1;
}
