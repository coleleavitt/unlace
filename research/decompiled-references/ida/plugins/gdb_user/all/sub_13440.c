__int64 __fastcall sub_13440(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  char v4; // al
  unsigned int *v5; // rdi
  __int64 v6; // rbp
  char v8; // al
  __int64 v9; // r14
  char v10; // al
  int v11; // r15d
  char v12; // al
  int v13; // ecx
  _DWORD *v14; // rdx
  int v15; // esi
  int v16; // r15d
  int v17; // eax
  unsigned int v18; // eax
  unsigned __int16 v19; // [rsp+Ch] [rbp-5Ch]
  unsigned int *v20; // [rsp+10h] [rbp-58h] BYREF
  __int128 v21; // [rsp+18h] [rbp-50h]
  unsigned __int64 v22; // [rsp+28h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 864);
  v22 = __readfsqword(0x28u);
  v21 = 0;
  v20 = nullptr;
  v4 = sub_3C640(v3, a2, 2, &v20);
  v5 = v20;
  v6 = 0;
  if ( v4 && (_QWORD)v21 == 2 && (*(_WORD *)v20 == 23117 || *(_WORD *)v20 == 19802) )
  {
    v8 = sub_3C640(*(_QWORD *)(a1 + 864), a2 + 60, 4, &v20);
    v5 = v20;
    v6 = 0;
    if ( v8 )
    {
      if ( (_QWORD)v21 == 4 )
      {
        v9 = *v20;
        v10 = sub_3C640(*(_QWORD *)(a1 + 864), a2 + v9, 248, &v20);
        v5 = v20;
        if ( v10 )
        {
          if ( (_QWORD)v21 == 248 && *v20 == 17744 )
          {
            v11 = v20[14];
            v19 = *((_WORD *)v20 + 3);
            v12 = sub_3C640(
                    *(_QWORD *)(a1 + 864),
                    a2 + (int)(v9 + *((unsigned __int16 *)v20 + 10) + 24),
                    40LL * v19,
                    &v20);
            v5 = v20;
            if ( v12 )
            {
              if ( 40LL * v19 == (_QWORD)v21 )
              {
                v13 = 0;
                v14 = v20;
                if ( !v11 )
                  v11 = 1;
                v15 = v11 - 1;
                v16 = -v11;
                while ( v19 > v13 )
                {
                  v17 = v14[2];
                  if ( !v17 )
                    v17 = v14[4];
                  v18 = v14[3] + (v16 & (v15 + v17));
                  if ( (unsigned int)v6 < v18 )
                    LODWORD(v6) = v18;
                  ++v13;
                  v14 += 10;
                }
                v6 = (unsigned int)v6;
              }
            }
          }
        }
        else
        {
          v6 = 0;
        }
      }
    }
  }
  if ( v5 )
  {
    *(_QWORD *)&v21 = 0;
    qfree();
  }
  return v6;
}

