{
  description = "QMK Firmware for otyl, a custom ergonomic split keyboard";

  inputs = {
    nixpkgs.url = "github:NixOs/nixpkgs/nixos-unstable";
  };

  outputs =
    { self, nixpkgs }:
    let
      system = "x86_64-linux";
      pkgs = nixpkgs.legacyPackages.${system};
    in
    {
      devShells.${system}.default = pkgs.mkShell {
        nativeBuildInputs = with pkgs; [
          qmk
          qmk-udev-rules
        ];
      };
    };
}
